#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16

const int redPin = 3;
const int greenPin = 2;
const int bluePin = 4;

int red;
int green;
int blue;

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif
  
void render();
void writeText(int x, int y, int size, char* string);

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

	/* setup oled */
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	display.clearDisplay(); /* clear display remenants */
}

void loop()
{
	/* read serial data */
	while (Serial.available() > 1)
	{
    		red = Serial.parseInt();
    		green = Serial.parseInt();
    		blue = Serial.parseInt();
      		analogWrite(redPin, red);
      		analogWrite(greenPin, green);
      		analogWrite(bluePin, blue);
  	}
	render();
}

void render()
{
	display.clearDisplay();
	writeText(0, 0, 2, "text");
        display.display(); /* push and render oled */
}

void writeText(int x, int y, int size, char* string)
{
	display.setTextSize(size);
	display.setTextColor(WHITE);
	display.setCursor(x, y);
	display.println(string);
}

