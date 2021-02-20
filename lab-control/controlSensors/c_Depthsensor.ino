/* Brian Collins Lab 4 Control.
 
 * BLINKER CLASS DEFINITION
 * This example demonstrates the use of classes & variables both
   private & public in Arduino
   
   Rules to follow are
 1.Class Definitions must be done before using the Class as a variable.
   It will not compile.
   Error "Variable" was not declared in this scope will appear.

 2.When using Arduino IDE Tabs it compiles from left to right.
   Classes & Functions must always be in the Tabs before Main.
   
 */

class depthSensor {
  private:
    byte pinID;

    unsigned long timeOn;
    unsigned long nextChangeTime = 0;
    int val = 0;                    //variable to store the value read
    float voltage = A0;
    float distance;
    
  public:
    depthSensor(byte pinID, unsigned long timeOn) {
     this-> pinID = pinID;
     this-> timeOn = timeOn;
                                          
   // initialize the Sensor pin as an input:
      pinMode(pinID, INPUT);
    }

   // Checks whether it is time to turn on the sensor.
    void check() {
      unsigned long currentTime = millis();

      if(currentTime >= nextChangeTime) {
        pinID = HIGH;
        
    // read the value of the sensor:
        int sensorValue = analogRead(A0);
        float voltage = sensorValue * (5.0 / 1023.0); 
        float distance =-21.123*voltage + 58.073;
        Serial.print(distance);
        delay(1);        // delay in between reads for stability

 
  
          nextChangeTime = currentTime + timeOn;
        
        }
       
        }

        float getValue(){
          
      }
    };
    
