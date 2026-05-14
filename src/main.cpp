#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // initialize the built-in LED pin as an output
  Serial.begin(9600);            	// initialize serial communication at 9600 bits per second:
  delay(1000);                      	// wait for serial monitor to open
 }	

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  Serial.print(LED_BUILTIN);             // print the pin number of the LED
  Serial.println("Pin LED is On");        // print the state of the LED
  delay(1000);                                    // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // change state of the LED by setting the pin to the LOW voltage level
  Serial.print(LED_BUILTIN);             // print the pin number of the LED
  Serial.println("Pin LED is Off");        // print the state of the LED
  delay(1000);                                    // wait for a second    
}
