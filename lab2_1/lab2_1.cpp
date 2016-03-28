// Do not remove the include below
#include "lab2_1.h"

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
	myAnalogWrite(REAR_LED_PIN, 100, 2000);
	myAnalogWrite(REAR_LED_PIN, 75, 2000);
	myAnalogWrite(REAR_LED_PIN, 50, 2000);
	myAnalogWrite(REAR_LED_PIN, 25, 2000);
	myAnalogWrite(REAR_LED_PIN, 0, 2000);
	exit(0);
}
