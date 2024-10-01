commands to build

cmake -S . -B ./out/Debug/ -DINMOST_DIR=$PATH_TO_INMOST_INSTALL -DCMAKE_CXX_STANDARD=11
cmake --build out/Debug/ -j 4
