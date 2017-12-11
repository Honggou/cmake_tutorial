#!/bin/bash

set -e

clang-format --version
find . -regex '.*\.[CHchi]p*' -exec clang-format -style=file -fallback-style=none -i {} +
