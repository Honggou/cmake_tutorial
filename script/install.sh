#! /bin/bash
pushd build
make

make DESTDIR=../install install

popd