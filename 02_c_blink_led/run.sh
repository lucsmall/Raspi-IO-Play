#!/bin/bash
gpio export 18 out
./main
gpio unexportall
