#!/usr/bin/env bash

clang-format -i --style=file ./src/*.cpp

cd src

bazel build examples

cd ..

bazel-bin/src/examples
