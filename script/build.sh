#! /bin/bash

cmake "-Bbuild" "-H./"

pushd build
make

popd
