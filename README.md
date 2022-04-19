# CXX
This project aims at providing a minimal configuration for any C project

# SUMMARY
<ol>
    <li>Introduction</li>
    <li>CMake</li>
    <li>Testing
        <ol>
            <li>CMock/Unity</li>
            <li>CMocka</li>
        </ol>
    </li>
    <li>Debugging</li>
</ol>

## Introduction
This project aims at providing a minimal configuration for any C++ project. Here are a list of tools used that can be helpful for any project:
<ol>
    <li>source files compilation management : **CMake** </li>
    <li>test frameworks: **CMock**, **Unity**, **CMocka** </li>
    <li>Coverage : **gcov**</li>
    <li>CI : **Jenkins**</li>
    <li> Debug : **gdb** </li>
    <li> Compiler : **clang** </li>
</ol>

A Docker has also been created for this repository. K8S can be used to orchestrate N dockers.

This repo will describe how to use these tools for a simple C project.

This repo is made of two main directories : 
<ul>
<li> one containing the source code of the application (cxx) </li>
<li> one containing everything related to testing (tests) </li>
</ul>
When compiling the application, a third folder (build) will be created.

In cxx, *advanced_math* and *base_math* are example directory that in a real project, could be librairies.

## CMake
To compile source files using CMake, several CMakelists.txt have to be placed.

To compile CMake project inside a build directory:
```sh
cd build; cmake ..
```
This command will generate 'Makefile's containing rules to compile the application.

To compile all executables defined:
```sh
make 
```

*clean* can be added to remove generated files before compiling. If only one executable has to be compiled, run:
```sh
make $NAME_OF_EXECUTABLE
```

To configure a CMake project/Intelli sense under VS Code, a folder .vscode has to be added,with a settings.json file containing:
```json
{
    "C_Cpp.default.configurationProvider": "ms-vscode.cmake-tools"
}
```
Another way is to run Cmd + Shift + p, then '>Reload window' and then select a compiler.

## Testing
In the test folder, several sub-folders have been added for every librairy. Every test ending with '01' and '02' are tests played using GoogleTest framework.
'03' and '04' tests use tests CMock/Unity.

When testing, it is important to differenciate Mocks and Stubs.


Test results can be output in several formats. This repo will only focus on JUnit.
### GoogleTest

Note: 
A Python script has to be implemented to convert GoogleTest results to a JUnit format.

### CMock / Unity
Install
```sh
git clone --recursive https://github.com/throwtheswitch/cmock.git
bundle install --path vendor/bundle
```
An internet connection is needed for both commands.

### CMocka

```sh
git clone https://git.cryptomilk.org/projects/cmocka.git
mkdir build
cd build; cmake ..; make
```

cmake -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/gcc ..
to force to use gcc compiler in C and C++

Uncomment some lines of CodeCoverage.cmake to use CMocka

TODO
Doc