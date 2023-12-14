#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/Huclark/alx-low_level_programming/master/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=/tmp/libinj.so/*if you would like to see anything about the code used, check the file location liste in the github*/
