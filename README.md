# LuaOpenCV
OpenCV binding for Lua


Licensed under [Boost Software License](http://www.boost.org/LICENSE_1_0.txt)


## Requirements
- Lua 5.1 to 5.3 (recommended: 5.3)
- C++11 compiler(gcc 4.8+,clang 3.4+,MSVC2015).
- CMake 2.8 or later

## Getting Started

Check out third pary libraries.
```bash
git submodule update --init --recursive
```

### On Windows (with MSVC2015)
Build and local installation for OpenCV
```bash
cd third_party\opencv
mkdir build
cd build
cmake ..\ -DCMAKE_INSTALL_PREFIX=..\..\opencvlib -DBUILD_SHARED_LIBS=Off -DBUILD_WITH_STATIC_CRT=Off
cmake --build . --config Release
cmake --build . --config Release --target install
```
Building lua library
```bash
cd ..\..\ # return to root of source tree
mkdir build
cd build
cmake ..\
cmake --build . --config Release
```
Outputed cv.dll into lua.cpath directory.
And execute sample 
```bash
 lua samples/hello_opencv.lua
```


### On Unix-like Systems(with Unix Makefiles)
Build and local installation for OpenCV
```bash
cd third_party\opencv
mkdir build
cd build
cmake ../ -DCMAKE_INSTALL_PREFIX=../../opencvlib -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=Off
cmake --build . 
cmake --build . --target install
```
Building lua library
```bash
cd ../../ # return to root of source tree
mkdir build
cd build
cmake ../ -DCMAKE_BUILD_TYPE=Release
cmake --build .
```
Outputed libcv.so into lua.cpath directory.
And execute sample 
```bash
 lua samples/hello_opencv.lua
```
