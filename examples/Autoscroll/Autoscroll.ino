/*
  MIKROE LCD mini click - Hello World
  
 https://www.mikroe.com/lcd-mini-click

 This sketch demonstrates the use of the autoscroll()
 and noAutoscroll() functions to make new text scroll or not.

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi
 modified 21 Feb 2019
 by Teodor Costachioiu (https://electronza.com)

 This example code is in the public domain.

 https://electronza.com/arduino-mikroe-lcdmini-library

*/

// include the library code:
#include <MIKROE_LCDmini.h>

/* The LCD library is initialized as follows:
 * MCP23S17_LCD(uint8_t rst, uint8_t cs, uint8_t PORT);
 * rst  - RST pin for MCP23S17
 * cs   - CS pin for MCP23S17 
 * ncs  - CS pin for 
 * pwmpin - lcd backlight control pin
 * 
 * MCP23S17_LCD lcd(uint8_t rst, uint8_t cs, uint8_t ncs, uint8_t pwmpin);
 * 
 * Examples, when using Arduino Uno and Arduino Uno click shield
 * https://www.mikroe.com/arduino-uno-click-shield
 * for mikroBUS socket #1
 * MCP23S17_LCD lcd(A3, 10, A0, 6);
 * for mikroBUS socket #2
 * MCP23S17_LCD lcd(A2, 9, A1, 5);
*/

MIKROE_LCDmini lcd(A3, 10, A0, 6);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin();
  lcd.setContrast(30);
  //lcd.setBacklight(600);   
}
