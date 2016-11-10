cd third_party\opencv
mkdir build
cd build
cmake ../ -DCMAKE_INSTALL_PREFIX=..\..\opencvlib -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=Off -DBUILD_WITH_STATIC_CRT=Off
cmake --build . --config Release
cmake --build . --config Release --target install
cd ../../