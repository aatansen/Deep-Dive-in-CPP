## Environment Setup ([VSCode](https://code.visualstudio.com/))

- SourceForge (old version):
  - Download **[MinGW - Minimalist GNU for Windows](https://sourceforge.net/projects/mingw/)** and install selecting all options.
  - Add `bin` path of `MinGW` e.g: `C:\MinGW\bin`
- TDM-GCC(setup and use):
  - Download and install [tdm-gcc](https://jmeubank.github.io/tdm-gcc/)
- Msys2 (Latest version - Recommended by vscode):
  - Download latest Msys2 [installer](https://www.msys2.org/#installation) also available in [github](https://github.com/msys2/msys2-installer/releases) and install it.
  - After install open msys2 and run `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain` enter `Y` when asked for permission.
  - Add `bin` path of `Msys2` e.g: `C:\msys64\ucrt64\bin`
  > More sources available in [mingw-w64](https://www.mingw-w64.org/)

- Msys2 Commands

  | **Command**                           | **Description**                                           |
  | ------------------------------------- | --------------------------------------------------------- |
  | `pacman -S <package>`                 | Install a package                                         |
  | `pacman -S --needed <package>`        | Install only if not already installed                     |
  | `pacman -R <package>`                 | Remove a package                                          |
  | `pacman -Sy`                          | Sync package database (without upgrading packages)        |
  | `pacman -Syu`                         | Update all packages (system upgrade)                      |
  | `pacman -Rns <package>`               | Remove a package along with dependencies and config files |
  | `pacman -Qe`                          | List explicitly installed packages                        |
  | `pacman -Qi <package>`                | Show details of an installed package                      |
  | `pacman -Rns $(pacman -Qdtq)`         | Remove all orphaned packages                              |
  | `pacman -Ss <keyword>`                | Search for a package in the repositories                  |
  | `pacman -Q`                           | Lists all installed packages                              |
  | `g++ --version`                       | Check installed C++ compiler version                      |
  | `g++ file.cpp -o file.exe && file.exe`| Compile a C++20 program                                   |
  | `gcc --version`                       | Check installed C compiler version                        |
  | `cmake . && make`                     | Build a project using CMake                               |
  | `make`                                | Compile using a Makefile                                  |

- Install **[C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)** & **[Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) extension**
- To run code that has spaces in filename (`first code.cpp`) add this in vscode setting:

    ```json
    "code-runner.runInTerminal": true,
        "code-runner.executorMap": {
            "cpp": "cd $dir && g++ \"$fileName\" -o \"$fileNameWithoutExt\" && \"./$fileNameWithoutExt\""
          }
    ```

## University Courses

- **[01 Operating System Algorithms](https://github.com/aatansen/Deep-Dive-in-CPP/tree/main/00%20C%2B%2B%20University%20Courses/01%20Operating%20System%20Algorithms)**
- **[02 Compiler](https://github.com/aatansen/Deep-Dive-in-CPP/tree/main/00%20C%2B%2B%20University%20Courses/02%20Compiler)**
- **[03 Computer Graphics](https://github.com/aatansen/Deep-Dive-in-CPP/tree/main/00%20C%2B%2B%20University%20Courses/03%20Computer%20Graphics)**

## C++ Programming Essentials for Beginners

- **[Basic C++](https://github.com/aatansen/Deep-Dive-in-CPP/tree/main/01%20C%2B%2B%20Programming%20Essentials%20for%20Beginners)**
