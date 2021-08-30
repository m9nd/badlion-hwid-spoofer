# BAC-HWID-Spoofer
HWID Spoofer for the popular client-side minecraft anticheat BAC (Badlion Anti-Cheat)

## Notes
This is a modified version of `BACASABLE`. This program is super simple, all it does is it removes regedit entries for display monitors and then maps a driver using kdmapper to spoof disk identifiers. 

## Changes
- xorstr 
- Basic debugger detection
- Changing title to prevent detections


## Installation
**Step 1** - Create a new C++ Project in VS2019.

**Step 2** - Create 3 new files, `main.cpp`, `main.h`, and `xorstr.hpp`.

**Step 3** - Copy and paste the code from the files here into the files in Visual Studio.

**Step 4** - In the top left go to `Project` -> `Properties` -> `General` -> `C++ language standard` -> `/std:c++17`.

**Step 5** - While in the Project Properties page go to `C/C++` -> `Optimization` -> `Optimization Favor Speed (/Ox)`.

**Step 6** - Exit out of the Project Properties page and compile `Ctrl + B`.

## Credits
[Ventaz](https://github.com/Ventaz/) 

[PeterG75](https://github.com/PeterG75/BACASABLE) 

[JustasMasiulis](https://github.com/JustasMasiulis/xorstr)
