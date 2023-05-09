
# BAC HWID Spoofer
this is a modified basic spoofer for the popular client-side minecraft anticheat BAC (badlion anti-cheat)

## notes
this is a modified version of `BACASABLE`. this program is super simple, all it does is it removes regedit entries for display monitors and then maps a driver using kdmapper to spoof disk identifiers. 

## changes
- xorstr string encryption
- intermediate debugger detection
- changes window title to prevent detections


## installation
**step 1** - create a new C++ project in VS2019.

**step 2** - create 2 new files `main.cc` and `xorstr.hh`

**step 3** - copy and paste the code from the files here into the files in visual studio.

**step 4** - in the top left go to `Project` -> `Properties` -> `General` -> `C++ language standard` -> `/std:c++17`.

**step 5** - while in the project properties page go to `C/C++` -> `Optimization` -> `Optimization Favor Speed (/Ox)`.

**step 6** - exit out of the project properties page and compile `Ctrl + B`.

**step 7** - You'll need the kdmapper.exe and spoofer.sys files. 

## Credits
[Ventaz](https://github.com/Ventaz/) 

[PeterG75](https://github.com/PeterG75/BACASABLE) 

[JustasMasiulis](https://github.com/JustasMasiulis/xorstr)
