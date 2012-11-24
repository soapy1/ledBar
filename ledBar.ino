/* Psudo led wave monitor - really just a row of LEDs turning on and off based on time
 * 
 * code is based off http://arduino.cc/en/Tutorial/BarGraph and Blink example
 *
 */

// these constants correspond to each output on the arduino board (the blue one to the left).
// For example, "ledTwo = 2;" reffers to the digital output pin labelled two. 
// these constants won't change
int ledTwo = 2;
int ledThree = 3;
int ledFour = 4;
int ledFive = 5;
int ledSix = 6;
int ledSeven = 7;
int ledEight = 8;
int ledNine = 9;
int ledTen = 10;
int ledEleven = 11;

// this intializes the arduino and defines that each pin abouve is an output.  In other words
// when the pin is called, it will sent electricity to the pin so that we can see a result
void setup() {
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(ledFive, OUTPUT);
  pinMode(ledSix, OUTPUT);
  pinMode(ledSeven, OUTPUT);
  pinMode(ledEight, OUTPUT);
  pinMode(ledNine, OUTPUT);
  pinMode(ledTen, OUTPUT);
  pinMode(ledEleven, OUTPUT);
}

/* 
 * A loop that turns the LEDs on and off in an organized fashion.  
 * At one time, no more than two LEDs can be on
 */ 
 
// a loop is programming sturcture which allows a section of code to be run from
// beginning to end until the loop is broken.  In this code, the loop is never boken
// so you see the LEDs cycling or turning on and off FOREVER.
void loop() {
    // going backwards
    digitalWrite(ledTwo, HIGH);    // turns the LED corresponding to ledTwo on         |   Essenitally, this part of the code turns LEDs on one after another while turning the
    delay(50);                    // waits a fraction of a second                      |   LED two behind (if there is an LED two behind) off.  This creates a sort of fluid cycle
    digitalWrite(ledThree, HIGH);  // turns the LED corresponding to ledThree on       |   that you see.
    delay(50);                    // waits a fraction of a second                      |   For the part labelled "going forward" (just scroll down), the same thing happens except in 
    digitalWrite(ledFour, HIGH);   // turns the LED corresponding to ledFour on        |   reverse. 
    digitalWrite(ledTwo, LOW);    // turns the LED corresponding to ledTwo off         |   Also, remember that this is a loop so the program will reapeat from the top so that in the 
    delay(50);                   // YOU GET THE IDEA                                   |   end, you see a flow of lights going back and forth.
    digitalWrite(ledFive, HIGH);
    digitalWrite(ledThree, LOW);
    delay(50);
    digitalWrite(ledSix, HIGH);
    digitalWrite(ledFour, LOW);
    delay(50); 
    digitalWrite(ledSeven, HIGH);
    digitalWrite(ledFive, LOW);
    delay(50);
    digitalWrite(ledEight, HIGH);
    digitalWrite(ledSix, LOW);
    delay(50);
    digitalWrite(ledNine, HIGH);
    digitalWrite(ledSeven, LOW);
    delay(50);
    digitalWrite(ledTen, HIGH);
    digitalWrite(ledEight, LOW);
    delay(50);
    digitalWrite(ledEleven, HIGH);
    digitalWrite(ledNine, LOW);
   
    //going forwards
    delay(50);
    digitalWrite(ledNine, HIGH);
    digitalWrite(ledEleven, LOW);
    delay(50);
    digitalWrite(ledEight, HIGH);
    digitalWrite(ledTen, LOW);
    delay(50);
    digitalWrite(ledSeven, HIGH);
    digitalWrite(ledNine, LOW);
    delay(50); 
    digitalWrite(ledSix, HIGH);
    digitalWrite(ledEight, LOW);
    delay(50);
    digitalWrite(ledFive, HIGH);
    digitalWrite(ledSeven, LOW);
    delay(50);
    digitalWrite(ledFour, HIGH);
    digitalWrite(ledSix, LOW);
    delay(50);
    digitalWrite(ledThree, HIGH);
    digitalWrite(ledFive, LOW);
    delay(50);
    digitalWrite(ledTwo, HIGH);
    digitalWrite(ledFour, LOW);
    //delay(200);
    
}
