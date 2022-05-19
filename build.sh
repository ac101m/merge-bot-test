#!/usr/bin/env bash
mkdir -p bin
gcc hello.c -o bin/hello
bin/hello $@
