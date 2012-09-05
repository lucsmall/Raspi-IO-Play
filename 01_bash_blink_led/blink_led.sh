#!/bin/bash
#
# Use the "gpio" program that comes as part of the Wiring Pi package
# to blink a let 5 times
#

# Set the output according to the Broadcom GPIO numbering scheme
OUTPUT0=18
PERIOD=0.1

echo set GPIO$OUTPUT0 as output
gpio -g mode $OUTPUT0 out

for ((i=1; i <= 5; i++))
do
	echo set GPIO$OUTPUT0 high
	gpio -g write $OUTPUT0 1
	sleep $PERIOD
	echo set GPIO$OUTPUT0 low
	gpio -g write $OUTPUT0 0
	sleep $PERIOD
done

echo set GPIO$OUTPUT0 as input
gpio -g mode $OUTPUT0 in
