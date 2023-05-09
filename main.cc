
// bacsable badlion anticheat bypass modified, optimized, and commented cuz i was bored... no idea if this still bypasses

#include <windows.h>

#include <TlHelp32.h>
#include <algorithm>
#include <iostream>
#include <psapi.h>
#include <random>
#include <string>

#include "xorstr.hh"

const char in[] = "qwerty1ui2op5asd7fgh8jkl9zx3c4vb6nm";
char out[16];

bool IsParentDebugger() {
    DWORD parentProcessId = 0;
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot != INVALID_HANDLE_VALUE)
    {
        PROCESSENTRY32 pe = { sizeof(pe) };
        if (Process32First(hSnapshot, &pe))
        {
            do
            {
                if (pe.th32ProcessID == GetCurrentProcessId())
                {
                    parentProcessId = pe.th32ParentProcessID;
                    break;
                }
            } while (Process32Next(hSnapshot, &pe));
        }
        CloseHandle(hSnapshot);
    }

    if (parentProcessId)
    {
        HANDLE parentProcess = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, parentProcessId);
        if (parentProcess)
        {
            char processName[MAX_PATH] = { 0 };
            DWORD processNameLength = sizeof(processName);
            if (QueryFullProcessImageNameA(parentProcess, 0, processName, &processNameLength))
            {                          // these are just examples and you can obviously replace them with whatever you want
                if (strstr(processName, "OllyDbg.exe") != nullptr  ||
                    strstr(processName, "IDA.exe") != nullptr  ||
                    strstr(processName, "x64dbg.exe") != nullptr  ||
                    strstr(processName, "gdb.exe") != nullptr ||
                    strstr(processName, "windbg.exe") != nullptr) 
                {
                    std::cout << xorstr("parent process is a debugger") << std::endl;
                    CloseHandle(parentProcess);
                    return true;
                }
            }
            CloseHandle(parentProcess);
        }
    }
    return false;
}

int main() {

    if (IsDebuggerPresent() || IsParentDebugger())
    {
        std::cout << xorstr("debugger detected") << std::endl;
        exit(-1);
    }

    std::cout << xorstr("no debugger detected") << std::endl;

    std::sample(std::begin(in), std::end(in) - 1, std::begin(out),
        15, std::mt19937{ std::random_device{}() });

    out[15] = '\0';
    SetConsoleTitleA(out);

    std::cout << xorstr("Badlion AntiCheat HWID Spoofer\n\n");
    system("pause");

    std::cout << xorstr("Clearing display monitor information from the registry...\n");

    system(xorstr("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\Display /f"));
    system(xorstr("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Enum\\Display /f"));

    std::cout << xorstr("\nSpoofing disk identifiers...\n\n");
    system(xorstr("kdmapper.exe spoofer.sys"));

    std::cout << xorstr("\nHWID Successfully spoofed!\n");

    system("pause > nul");
    return 0;
}
