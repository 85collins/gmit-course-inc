
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
class Blinker {
  //Below variables remain private & cannot be altered from the main
  private:
    byte pinLED;

    boolean ledState = LOW;

    unsigned long timeLedOn;
    unsigned long timeLedOff;

    unsigned long nextChangeTime = 0;
    
  //Below variables are public
  public:
    Blinker(byte pinLEDTmp, unsigned long timeLedOnTmp, unsigned long timeLedOffTmp) {
      pinLED = pinLEDTmp;
      timeLedOn = timeLedOnTmp;
      timeLedOff = timeLedOffTmp;

  //Initialize the LED pin as an output:
      pinMode(pinLED, OUTPUT);
    }

    // Checks whether it is time to turn on or off the LED.
    void check() {
      unsigned long currentTime = millis();

      if(currentTime >= nextChangeTime) {

        if(ledState) {
     // LED is currently turned On. Turn Off LED.
          ledState = LOW;
          nextChangeTime = currentTime + timeLedOff;
        }
        else{
     // LED is currently turned Off. Turn On LED.
          ledState = HIGH;
          nextChangeTime = currentTime + timeLedOn;
        }

        digitalWrite(pinLED, ledState);
      }
    }
};
