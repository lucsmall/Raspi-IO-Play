#!/bin/bash
#
# Export the required IOs to userland here
#
#gpio export 18 out

# Invoke exec in userland
./main

# Remove exports
gpio unexportall
