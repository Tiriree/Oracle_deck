/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/

const int ledPin = 13; 
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  byte blow;
  if (Serial.available()) {
  blow = Serial.read();
  if (blow == 1) { 
    digitalWrite(13, HIGH); 
    delay(10);
  } 
  if (blow == 0) { 
    digitalWrite(13, LOW);
    delay(10); 
  }
  }
//  digitalWrite(2, HIGH);   // turn the FAN on (HIGH is the voltage level)
//  delay(3000);                       // wait for a second
//  digitalWrite(2, LOW);    // turn the FAN off by making the voltage LOW
//  delay(3000);                       // wait for a second
}
