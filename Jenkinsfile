node ('linux'){
 stage 'Checkout'
 checkout scm
 sh 'git submodule update --init --recursive'
 stage 'Build'
 sh 'bash opencv_build.sh'
 sh 'cmake ./ -DCMAKE_BUILD_TYPE=Release'
 sh 'cmake --build .'
 stage 'Test'
 sh 'ctest --output-on-failure'
}