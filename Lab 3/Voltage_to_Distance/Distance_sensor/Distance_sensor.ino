/* Depth sensor lab. BRIAN COLLINS.
 * Wiring a Depth sensor with our Arduino.
 
 * Taking in Voltage points at certain distances.
 
 * Implementing those plot points into our excel spreadsheet
 through software linearization occurs.
 
* We do this to Calibrate the sensor & obtain a trendline.

* Statistcal Tools called regression analysis we find the tightest trendline.

* Through implementating a equation into our Arduino code we can see the distance
on the serial plotter.
 */

void setup() {
  
Serial.begin(9600); // Serial communications at 9600 bits of data per second on serial plotter
}

void loop() {

int sensorValue = analogRead(A0);              // We are reading in our signal from the distance sensor into analog pin 0.              
float voltage = sensorValue * (5.0 / 1023.0);  // To change the values from 0-1023 to a range
                                               // that corresponds to the voltage the pin is reading.


Serial.print("X,");    // Serial Print "X"
Serial.print(voltage); // Serial Print Voltage
Serial.print("  ");    // Serial Print " "           
Serial.println(" ");   // Serial Print " "
}
