#!/bin/bash
wget -P https://raw.githubusercontent.com/Tauraim/alx-low_level_programming/0x18-dynamic_libraries/liblot.so/
export LD_PRELOAD="$PWD/../liblot.co"
