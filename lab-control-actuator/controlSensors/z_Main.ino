// Brian Collins Lab 5  Date-5/03/2021
// Depth Sensor controlling angle of Servo Motor

#define PIN_LED 3     // pin that the LED is attached to
#define PIN_ID A0     // pin that the sensor is attached to
#define PIN_SERVO 10  // pin that servo motor is attached to


Blinker blink1 = Blinker(PIN_LED, 1000, 2000);
depthSensor testDepthSensor(PIN_ID, 40);
servoActuator testservo(PIN_SERVO, 50);

void setup() {
Serial.begin(9600);   // Serial communications at 9600 bits of data per second on serial plotter
}

void loop() {
  blink1.check();
  testDepthSensor.check();

  Serial.println(testDepthSensor.getDepth());     // Command to print distance readings
  Serial.print(" ");

  testservo.setAngle(testDepthSensor.getDepth()); // Distance readings placed inside function to control servo
     
}
