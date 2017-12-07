#! /bin/bash

if [ -d build ];
then
    pushd build
    # To build a binary distribution you would run:
    cpack --config CPackConfig.cmake

    # To create a source distribution you would type
    cpack --config CPackSourceConfig.cmake

    popd
fi