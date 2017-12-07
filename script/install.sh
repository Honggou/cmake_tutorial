#! /bin/bash

if [ -d build ];
then
    pushd build
    make

    make DESTDIR=../install install

    popd
fi

