
#include "main.h"

int main() {

	if (IsDebuggerPresent()) {
		std::cout << (xorstr("Please close your Debugger.")) << std::endl;
		exit(-1);
	}

	std::string in = (xorstr("qwerty1ui2op5asd7fgh8jkl9zx3c4vb6nm")), out;
	std::sample(in.begin(), in.end(), std::back_inserter(out),
        15, std::mt19937{ std::random_device{}() });
	SetConsoleTitleA(out.c_str());

	std::cout << (xorstr("Badlion AntiCheat HWID Spoofer\n\n"));
	std::system(xorstr("pause"));

	std::cout << (xorstr("Clearing display monitor information from the registry...\n"));

	std::system(xorstr("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\Display /f"));
	std::system(xorstr("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Enum\\Display /f"));

	std::cout << (xorstr("\nSpoofing disk identifiers...\n\n"));
	std::system(xorstr("kdmapper.exe spoofer.sys"));

	std::cout << (xorstr("\nHWID Sucessfully spoofed!\n"));

	std::system(xorstr("pause > nul"));
	return 0;
}
