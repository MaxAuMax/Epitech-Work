#!/bin/bash

if [ -z $1 ]; then
    wc -l
else
    grep $1 -i | wc -l
fi
