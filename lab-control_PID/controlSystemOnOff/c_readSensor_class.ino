

class ReadSensor{

//Defining the class variables
  private:
  
  float sensorValue;
  int voltage;
  int Pin_IN;
  unsigned long timeOn;
  unsigned long nextChangeTime = 0;
  
  public:
//Constructor
   ReadSensor(byte Pin_IN,unsigned long timeOn){
    this->Pin_IN = Pin_IN;
    this->timeOn = timeOn;
   }

void check() {
      unsigned long currentTime = millis()
      
//Function to read sensor input.

   void ReadSensorInput(unsigned long currentTime){  
    
    if(currentTime >= nextChangeTime) {
      
     this->sensorValue = analogRead(Pin_IN);
     this->voltage = sensorValue * (5.0 / 1023.0);     //Reading from anologue pin A1 and converting to a voltage
      nextChangeTime = currentTime + timeOn;
    }
   }
   
// Function to get the Sensor Value
   float getsensorValue(){
      return sensorValue;
    }
// Function to get the Voltage readings
    int getVoltage(){
      return voltage;
    }
 };
