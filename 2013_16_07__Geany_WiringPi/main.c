#include <wiringPi.h>

#include <stdio.h>
#include <stdlib.h>

int main (void){
	printf ("Raspberry Pi wiringPi test program\n") ;

	if (wiringPiSetup () == -1)		//Checks if wiringPi library was setup
		exit (1) ;					//if not, exit

	pinMode(1, OUTPUT);				//Set pin 1 to output mode
	
	printf ("Turning on Pin 1\n") ;
	digitalWrite(1, HIGH);			//Set pin 1 to high
	delay(5000);					//Delay 5 seconds
	printf ("Turning off Pin 1\n") ;
	digitalWrite(1, LOW);			//Set pin 1 to low
  
	return 0;
}
