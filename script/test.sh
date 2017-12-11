#! /bin/bash

if [ -f "build/test/MathTestBin" ]
then
    ./build/test/MathTestBin
else
    ./script/build.sh
    ./build/test/MathTestBin
fi