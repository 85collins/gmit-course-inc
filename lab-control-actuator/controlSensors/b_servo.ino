#include <Servo.h>

   // Class Servo Motor
  class servoActuator{
    
   // Private Variables
  private:
    byte servoPin;
    int angleValue;        // Variable for angle value
    unsigned long timeOn;
    Servo myservo;         // creates servo object to control a servo
                           // servo: A variable of type Servo
  public:
    // Constructor to input private variables into public
      servoActuator(byte pinVal,unsigned long interval){
      this->servoPin = pinVal;
      this->timeOn = interval;
      pinMode(servoPin, OUTPUT);
    }

    // Function to call angle
  void setAngle (int angle){
 
      myservo.attach(servoPin);                  // (attach) Attach the Servo variable to a pin
      angleValue = analogRead(A0);               // analogRead transfers data on to angleValue variable
      angle = map(angleValue, 0, 1023, 0, 180);  // map (value, fromLow, fromHigh, toLow, toHigh)
      myservo.write(angle);                      // tell servo to go to a particular angle
      delay(timeOn);
    }
    
    };

     
