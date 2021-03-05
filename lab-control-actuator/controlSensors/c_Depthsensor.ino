// Brian Collins Lab 5 Distance readings & Servo Motor control
 
   // Class Depth Sensor
class depthSensor {
  
   // Private Variables
  private:
    byte pinID;
    unsigned long timeOn;
    unsigned long nextChangeTime = 0;
    int val = 0;                    //variable to store the value read
    float voltage = 0;
    float distance = 0;


  public:
   // Constructor to put private variables into public
    depthSensor(byte pinVal, unsigned long interval) {
     this-> pinID = pinVal;
     this-> timeOn = interval;
                                          
   // initialize the Sensor pin as an input:
      pinMode(pinID, INPUT);
       }

   // Checks whether it is time to turn on the sensor.
    void check() {
      unsigned long currentTime = millis();

   // Converting the readings from voltage into distance readings
      if(currentTime >= nextChangeTime) {
        val = analogRead(pinID);
        voltage = val * (5.0 / 1023.0); 
        distance =-21.123*voltage + 58.073;
        nextChangeTime = currentTime + timeOn;
        }
       
        }
    // Function to get voltage
        float getValue(){
          return voltage;
        }
    // Function to get distance
        float getDepth(){
          return distance;
        }
        
        };
    
