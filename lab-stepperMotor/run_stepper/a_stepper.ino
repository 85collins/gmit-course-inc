// Brian Collins
// 16/4/21
// Forward & Reverse stepper Motor
 
#define PinA 8
#define PinB 9
#define PinC 10      
#define PinD 11
#define NUMBER_OF_STEPS_PER_REV 512




  void writePINS(int a,int b,int c,int d){
    digitalWrite(PinA,a);
    digitalWrite(PinB,b);
    digitalWrite(PinC,c);
    digitalWrite(PinD,d);
}



  void oneStepCW (int timeDelay) {
    
  writePINS (1,0,0,0);
  delay (timeDelay);
  writePINS (1,1,0,0);
  delay(timeDelay);
  writePINS (0,1,0,0);
  delay (timeDelay);
  writePINS (0,1,1,0);
  delay (timeDelay);
  writePINS (0,0,1,0);
  delay(timeDelay);
  writePINS (0,0,1,1);
  delay (timeDelay);
   writePINS (0,0,0,1);
  delay(timeDelay);
  writePINS (1,0,0,1);
  delay (timeDelay);
 
  }

 void ReversePINS(int d,int c,int b,int a){
    digitalWrite(PinA,a);
    digitalWrite(PinB,b);
    digitalWrite(PinC,c);
    digitalWrite(PinD,d);
}
  
  void oneStepCCW (int timeDelay) {
    
  ReversePINS (1,0,0,0);
  delay (timeDelay);
  ReversePINS (1,1,0,0);
  delay(timeDelay);
  ReversePINS (0,1,0,0);
  delay (timeDelay);
  ReversePINS (0,1,1,0);
  delay (timeDelay);
  ReversePINS (0,0,1,0);
  delay(timeDelay);
  ReversePINS (0,0,1,1);
  delay (timeDelay);
  ReversePINS (0,0,0,1);
  delay(timeDelay);
  ReversePINS (1,0,0,1);
  delay (timeDelay);
 
  }
