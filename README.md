# PersonneCodeExemple

Linux:
Pour compiler sur Linux il faut avoir un compilateur, cmake et make
mkdir build && cd build
cmake ..
make

Windows:
Avec gcc:
mkdir build && cd build
cmake -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -G Ninja ..

Avec Visual Studio
mkdir build && cd build
cmake ..
