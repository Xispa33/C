# C
### CMock / Unity
Install
```sh
git submodule add https://github.com/Xispa33/CMock tests/frameworks/cmock/
cd tests/frameworks/cmock/; git pull --recurse-submodules
bundle install --path vendor/bundle
```
An internet connection is needed for all commands.

### CMocka

```sh
git submodule add https://git.cryptomilk.org/projects/cmocka.git tests/frameworks/cmocka/
cd tests/frameworks/cmocka/; mkdir build
cd build; cmake ..; make
```

cmake -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/gcc ..
to force to use gcc compiler in C and C++