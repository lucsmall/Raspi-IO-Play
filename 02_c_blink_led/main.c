/*
  Flash an LED on GPIO18 5 times.
*/

#include <wiringPi.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define OUTPUT0 18
#define PERIOD  1000

int main(void)
{
  int i;

  /*
    Set up wiring pi library
    Using ...Sys assumes GPIOs have been exported previously and allows program
    to run in userland.
    Replace with ...Gpio to avoid need for exporting. This requires root privs to run.
  */
  if (wiringPiSetupSys() == -1) {
    return 1;
  }

  /* Set as output */
  pinMode(OUTPUT0, OUTPUT);

  for(i=0;i<5;i++) {
    /* Set output high */
    digitalWrite(OUTPUT0, HIGH);
    delay(PERIOD);
    /* Set output low */
    digitalWrite(OUTPUT0, LOW);
    delay(PERIOD);
  }

  /* Clean up - set as input */
  pinMode(OUTPUT0, INPUT);
  return 0;
}



