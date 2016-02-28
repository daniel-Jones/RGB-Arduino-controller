const int redPin = 3;
const int greenPin = 2;
const int bluePin = 4;

int red;
int green;
int blue;
int ibyte;

void setup()
{
	Serial.begin(9600);
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	/* set all values to 0 */
	red = 0;
	green = 0;
	blue = 0;
	ibyte = 0;
}

void loop()
{
	/* read serial data */
	while (Serial.available() > 1)
	{
		ibyte = Serial.read();
		if (false)
		{
		} else { /* nothing special, move on */
	    		red = Serial.parseInt();
    			green = Serial.parseInt();
    			blue = Serial.parseInt();
      			analogWrite(redPin, red);
      			analogWrite(greenPin, green);
      			analogWrite(bluePin, blue);
		//	Serial.println(red);
		//	Serial.println(green);
		//	Serial.println(blue);
		}
  	}
}
