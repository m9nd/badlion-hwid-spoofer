# BAC-HWID-Spoofer
HWID Spoofer for the popular client-side minecraft anticheat BAC (Badlion Anti-Cheat)

## Notes
This is a modified version of `BACSABLE`. This is a pretty simple program, all it does is modifies regedit and runs spoofs disk identifiers. I added a changing title to prevent title detections just for learning/fucking around purposes. I also added xorstr because why not. One last thing, I do not know the original creator of `BACSABLE` so if you do, please create an issue and tell me so I can properly credit them.

## Installation
**Step 1** - Create a new C++ Project in VS2019.

**Step 2** - Create 3 new files, `main.cpp`, `main.h`, and `xorstr.hpp`.

**Step 3** - Copy and paste the code from the files here into the files in Visual Studio.

**Step 4** - In the top left go to `Project` -> `Properties` -> `General` -> `C++ language standard` -> `/std:c++17`.

**Step 5** - While in the Project Properties page go to `C/C++` -> `Optimization` -> `Optimization Favor Speed (/Ox)`.

**Step 6** - Exit out of the Project Properties page and compile `Ctrl + B`.
