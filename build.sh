#!/usr/bin/env bash

rm -rf build > /dev/null 2>&1  
mkdir build

pushd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .
popd
