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
