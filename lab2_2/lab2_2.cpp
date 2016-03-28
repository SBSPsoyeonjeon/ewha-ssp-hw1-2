// Do not remove the include below
#include "lab2_2.h"

#define REAR_LED_PIN 9
#define DUTY_CYCLE 20

void myAnalogWrite(int pin, int percent, int time)
{
	for(int i = 0; i < time/DUTY_CYCLE ; i++)
	{
		digitalWrite(pin,HIGH);
		delay((double)percent/100*DUTY_CYCLE);
		digitalWrite(pin, LOW);
		delay((double)(100-percent)/100*DUTY_CYCLE);
	}
}

void setup()
{
	pinMode(REAR_LED_PIN, OUTPUT);
}

void loop()
{
	for(int percent = 100; percent >= 0 ; percent--)
	{
		myAnalogWrite(REAR_LED_PIN, percent, 79);
	}
	exit(0);
}
