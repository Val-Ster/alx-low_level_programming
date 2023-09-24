#!/bin/bash

wget -P /tmp https://github.com/Val-Ster/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libinjected_code.so
export LD_PRELOAD=/tmp/libinjected_code.so
