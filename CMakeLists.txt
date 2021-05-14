cmake_minimum_required (VERSION 3.6)

option(USE_LLVM "Use LLVM toolchain" OFF)
option(USE_BOOST "Use Boost library" OFF)

if(USE_BOOST)
    if(NOT DEFINED $ENV{BOOST_ROOT})
        message(WARNING "BOOST_ROOT environmental variable not set! Build might fail")
	endif()
endif()

if(USE_LLVM)
    set(CMAKE_TOOLCHAIN_FILE "ClangToolchain.cmake")
endif()

project(hello_world)

# Set names and variables
set(TARGET_NAME ${CMAKE_PROJECT_NAME}) 

# Add executable
add_executable(${TARGET_NAME})

if(USE_BOOST)
    target_include_directories(${TARGET_NAME} PRIVATE
	    $ENV{BOOST_ROOT}
    )
endif()

target_sources(${TARGET_NAME} PRIVATE
	main.cpp
)