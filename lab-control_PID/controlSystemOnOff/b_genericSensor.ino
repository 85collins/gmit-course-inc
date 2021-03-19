class genericSensor {
  private:
    byte pinID;
    unsigned long timeOn;
    unsigned long nextChangeTime = 0;
    int pinValue = 0;  // variable to store the value read
    float voltage= 0;
    float  distance =0;
    
  public:
    //Constructor for class
    genericSensor(byte pinVal,unsigned long interval) {
      this->pinID = pinVal;
      this->timeOn = interval;
      pinMode(pinID, OUTPUT);
    }

    //Calculations only after an interval
    void intervalCheck( unsigned long currentTime) {
      //check the interval of time has passed, 50ms
      if(currentTime >= nextChangeTime) {
          pinValue = analogRead(pinID);  // read the input pin
          // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
          voltage = pinValue * (5.0 / 1023.0);
          //update the next time var
          nextChangeTime = currentTime + timeOn;
      }//end of interval logic
    }
    //Read the raw senor value
    float getPinValue(){
        return pinValue;
     }
     
     //Read the raw sensor value converted to voltage
     float getVoltage(){
        return voltage;
     }

      
};
