#include <Servo.h>

   // Class Servo Motor
  class servoActuator{
    
   // Private Variables
  private:
    byte servoPin;
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

      myservo.attach(servoPin);               // (attach) Attach the Servo variable to a pin
      angle = map(angle, 0, 360, 0, 360);     // map (value, fromLow, fromHigh, toLow, toHigh)
      myservo.write(angle);                   // tell servo to go to a particular angle
      delay(timeOn);
    }
    
    };

     
