const int redPin = 3;
const int greenPin = 2;
const int bluePin = 4;

int red;
int green;
int blue;
int cvalue;

void setup()
{
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	/* set all values to 0 */
	red = 0;
	green = 0;
	blue = 0;
	cvalue = 0;
}


void loop()
{
	while (red < 255)
	{
		//red++;
		analogWrite(redPin, red);
	}
	red = 0;
}


