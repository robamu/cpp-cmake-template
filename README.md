# C++ and C project template

Project template for building C++ and C projects with CMake and various different compilers
and IDEs. Install [CMake](https://cmake.org/install/) first.

## Windows

### Building with CMake on Windows using GCC and MinGW Makefiles

Install [MSYS2](https://www.msys2.org/) first. All command line steps here were done
in MinGW64. Set up MinGW64:

```sh
pacman -Syuuu
pacman -S git mingw-w64-x86_64-gdb mingw-w64-x86_64-make mingw-w64-x86_64-cmake mingw-w64-x86_64-gcc
```

Then build the application with

```cpp
mkdir Debug-MinGW64
cd Debug-MinGW64
cmake .. -G "MinGW Makefiles"
cmake --build . -j
```

### Using Visual Studio Code

Make sure you can build the application with MinGW64 like specified above. After that
there are good instructions on how to set up Visual Studio Code 
[here](https://code.visualstudio.com/docs/cpp/config-mingw)

### Using Eclipse

Copy the `.project` and `.cproject` file found in `misc/eclipse` into the project root
and open the folder in Eclipse with `Open Project from Filesystem`. Build configurations and 
launch files for MinGW were provided.

## Building with CMake using Visual Studio project files

Install [Visual Studio](https://visualstudio.microsoft.com/).
You can generate Visual Studio project files with the following command 
(here, for Visual Studio 2019)

```cpp
mkdir Debug-VS2019
cd Debug-VS2019
cmake .. -G "Visual Studio 16 2019"
```

After that, a `.sln` project file is generated which you can open with Visual Studio 2019.

## Building with CMake - Visual Studio Code - MSVC

Instructions can be found [here](https://code.visualstudio.com/docs/cpp/config-msvc).
Not tested yet.





