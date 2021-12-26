# CXX

# SUMMARY
Intro


Intro:
This project aims at providing a minimal configuration for any C++ project with CMake to manage source files compilation and GoogleTest to test implemented functions. 
A Python script has also been implemented to convert GoogleTest results to a JUnit format.
A continuous integration chain has been setup using Jenkins. 
A Docker has also been created for this repository. K8S is used to orchestrate N dockers.

To begin
1 - Create build directory and do:
cd build; cmake ..; make

The executable is created in the build folder.

(cmd + shift + p then reload window, select compiler to create a cmake project)

To configure a CMake project:
add a folder .vscode, add a file naùed settings.json, with
{
    "C_Cpp.default.configurationProvider": "ms-vscode.cmake-tools"
}

Next time: add second library + add google tests + move main directory inside cxx + debugging