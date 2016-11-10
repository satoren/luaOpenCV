cd third_party/opencv
mkdir build
cd build
cmake ../ -DCMAKE_INSTALL_PREFIX=../../opencvlib -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=Off 
cmake --build .
cmake --build . --target install