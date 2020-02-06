/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, A2, A3, A4, A5);
const int b1 = 4;
const int b2 = 3;
const int b3 = 2;
const int b4 = 8;
const int b5 = 6;
const int b6 = 5;
const int enter = 9;
int bs1 = 0; //buttonstate1
int bs2 = 0;
int bs3 = 0;
int bs4 = 0;
int bs5 = 0;
int bs6 = 0;
int enterstate = 0;


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  pinMode(b5,INPUT);
  pinMode(b6,INPUT);
  pinMode(enter,INPUT);
  
  // Print a message to the LCD.
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  bs1 = digitalRead(b1);
  bs2 = digitalRead(b2);
  bs3 = digitalRead(b3);
  bs4 = digitalRead(b4);  
  bs5 = digitalRead(b5);
  bs6 = digitalRead(b6);  
  enterstate = digitalRead(enter);
  int i = 0;
  int arr[] = {0,0,0,0,0,0,0};
  while(true)
{
//    Serial.println(i);
    i = 0;
  delay(100);
  bs1 = digitalRead(b1);
  bs2 = digitalRead(b2);
  bs3 = digitalRead(b3);
  bs4 = digitalRead(b4);  
  bs5 = digitalRead(b5);
  bs6 = digitalRead(b6);  
  enterstate = digitalRead(enter);
     
    //  Serial.println(enterstate);
  if(bs1==1)
  {  
    arr[0] = 1;
  }
  else if(bs2==1)
  {
    arr[1] = 1;
  }
  else if(bs3==1)
  {
    arr[2] = 1;
  }
  else if(bs4==1)
  {
    arr[3] = 1;
  }
  else if(bs5==1)
  {
    arr[4] = 1;
  }
  else if(bs6==1)
  {
    arr[5] = 1;
  }
  else if(enterstate==1)
  {
    arr[6] = 1;
    break;
  }
 }
  i = 0;
//  while(i<7)
//  {  
//    Serial.print(arr[i]);
//    i += 1;
//    delay(300);
//  }



  //ALPHABETS
  if (arr[0]==0 && arr[1]==1 && arr[2]==1 && arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("a");
    Serial.println("a");
    delay(1000);
  }
   else if (arr[0]==0 && arr[1]==0 && arr[2]==1 && arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("b");
    Serial.println("b");
    delay(500);
  }
  else if (arr[0]==0 && arr[1]==1 && arr[2]==1 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("c");
    Serial.println("c");
    delay(500);
  }
  else if (arr[0]==0 && arr[1]==1 && arr[2]==1 && arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("d");
    Serial.println("d");
    delay(500);
  }
  else if (arr[0]==0 && arr[1]==1 && arr[2]==1 && arr[3]==1 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("e");
    Serial.println("e");
    delay(500);
  }
   else if (arr[0]==0 && arr[1]==0 && arr[2]==1 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("f");
    Serial.println("f");
    delay(500);
  }
   else if (arr[0]==0 && arr[1]==0 && arr[2]==1 && arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("g");
    Serial.println("g");
    delay(500);
  }
   else if (arr[0]==0 && arr[1]==0 && arr[2]==1 && arr[3]==1 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("h");
    Serial.println("h");
    delay(500);
  }
   else if (arr[0]==1 && arr[1]==0 && arr[2]==1 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("i");
    Serial.println("i");
    delay(500);
  }
   else if (arr[0]==1 && arr[1]==0 && arr[2]==1 && arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("j");
    Serial.println("j");
    delay(500);
  }
   else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("k");
    Serial.println("k");
    delay(500);
  }
   else if (arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("l");
    Serial.println("l");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("m");
    Serial.println("m");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("n");
    Serial.println("n");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==1 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("o");
    Serial.println("o");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("p");
    Serial.println("p");
    delay(500);
  }
   else if (arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("q");
    Serial.println("q");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==1 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("r");
    Serial.println("r");
    delay(500);
  }
     else if (arr[0]==1 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==1 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("s");
    Serial.println("s");
    delay(500);
  }
   else if (arr[0]==1 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==0 && arr[5]==1 && arr[6]==1 )
  {
    lcd.print("t");
    Serial.println("t");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==1 && arr[4]==1 && arr[5]==0 && arr[6]==1 )
  {
    lcd.print("u");
    Serial.println("u");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==1 && arr[4]==1 && arr[5]==0 && arr[6]==1 )
  {
    lcd.print("v");
    Serial.println("v");
    delay(500);
  }
   else if (arr[0]==1 && arr[1]==0 && arr[2]==1 && arr[3]==0 && arr[4]==0 && arr[5]==0 && arr[6]==1 )
  {
    lcd.print("w");
    Serial.println("w");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==0 && arr[4]==0 && arr[5]==0 && arr[6]==1 )
  {
    lcd.print("y");
    Serial.println("y");
    delay(500);
  }
     else if (arr[0]==0 && arr[1]==1 && arr[2]==0 && arr[3]==1 && arr[4]==0 && arr[5]==0 && arr[6]==1 )
  {
    lcd.print("z");
    Serial.println("z");
    delay(500);
  }
  else
  {
    lcd.print("not found");
    Serial.println("not found");
    delay(500);
  }
  
}  
    
 
