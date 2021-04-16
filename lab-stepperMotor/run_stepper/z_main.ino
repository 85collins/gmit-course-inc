// Brian Collins
// 16/4/21
// Forward & Reverse stepper Motor
 
#define PinA 8
#define PinB 9
#define PinC 10      
#define PinD 11
#define NUMBER_OF_STEPS_PER_REV 512

void setup(){

  pinMode(PinA,OUTPUT);
  pinMode(PinB,OUTPUT);
  pinMode(PinC,OUTPUT);
  pinMode(PinD,OUTPUT);
}

void loop() {

  // Forward Function of Motor
  for(int i = 0; i < 512; ++i){
   oneStepCW(5);
   
    
   }
  // Reverse Function of Motor
  for(int i = 0; i < 512; ++i){
   oneStepCCW(5);
   
    
   }
    
 }
