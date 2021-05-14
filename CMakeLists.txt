cmake_minimum_required (VERSION 3.6)

option(USE_LLVM "Use LLVM toolchain" OFF)

if(USE_LLVM)
    set(CMAKE_TOOLCHAIN_FILE "ClangToolchain.cmake")
endif()

project(hello_world)

# Set names and variables
set(TARGET_NAME ${CMAKE_PROJECT_NAME}) 

# Add executable
add_executable(${TARGET_NAME})

target_sources(${TARGET_NAME} PRIVATE
	main.cpp
)