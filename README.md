# C++ and C project template

## Building with CMake - MinGW Makefiles

Install CMake and MSYS2 first. 

Set up MinGW64:

```sh
pacman -S git mingw-w64-x86_64-gdb mingw-w64-x86_64-make mingw-w64-x86_64-cmake mingw-w64-x86_64-gcc
```

Then build the application with

```cpp
mkdir Debug
cd Debug
cmake .. -G "MinGW Makefiles"
cmake --build . -j
```

## Building with CMake - Visual Studio 2019





