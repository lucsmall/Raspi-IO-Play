/*
  Description of what code does
*/
#include <wiringPi.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
  /*
    Set up wiring pi library
    Using ...Sys assumes GPIOs have been exported previously and allows program
    to run in userland.
    Replace with ...Gpio to avoid need for exporting. This requires root privs to run.
  */
  if (wiringPiSetupSys() == -1) {
    return 1;
  }

  /* Set up pin direction and pull ups/downs  */
  /* pinMode(OUTPUT0, OUTPUT); */

	/* Do stuff */
  /* digitalWrite(OUTPUT0, HIGH); */
  /* digitalWrite(OUTPUT0, LOW);  */

  /* Clean up - set as input */
  /* pinMode(OUTPUT0, INPUT); */
  return 0;
}



