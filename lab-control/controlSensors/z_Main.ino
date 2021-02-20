
#define PIN_LED 3  // pin that the LED is attached to
#define PIN_ID A0  // pin that the sensor is attached to
/*
 *          Main Program       
 
   Blinkerclass working.
   Could not figure out the depth sensor. 
   Got it so far but could not get it to read properly.
   Apologies.
   
 */
Blinker blink1 = Blinker(PIN_LED, 1000, 2000);
depthSensor testDepthSensor = depthSensor(PIN_ID, 40);

void setup() {
Serial.begin(9600); // Serial communications at 9600 bits of data per second on serial plotter
}

void loop() {
  blink1.check();
  testDepthSensor.check();

  Serial.println(testDepthSensor.getValue());
  delay(1);        // delay in between reads for stability
}
