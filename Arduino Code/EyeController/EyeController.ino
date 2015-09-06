#include <Servo.h> 
// CONSTANTS - keys for parsing messages via serial

 
Servo one;
Servo two;
char state;


// Arrays to hold information about state and mapping for each servo

 
void setup() 
{ 
    Serial.begin(9600);
while (! Serial); // Wait until Serial is ready - Leonardo
  Serial.println("ENTER NOW");
  // initialize each servo by passing the pin number to which it is attached

  one.attach(9);       // blue
  two.attach(10);      // black
  one.write(120);
  two.write(150);
    
} 
 
void loop() { 
  if(Serial.available()){     
      state = Serial.read();
      //one.write(120);
        //  two.write(150);
      //flag=0;   
  
    
 //SERVO 1
 
 if(state == 'u') { 


 one.write(60+20);
 delay(10);


 }


else if(state == 'd' ) { 
 

 one.write(180);
 delay(10);


 }
 
 
//SERVO 2


else if(state == 'l' ) { 
 
          two.write(180);
          delay(10);

 }
 

else if(state == 'r' ) { 
 
          two.write(90);
          delay(10);
 }
 
else if(state == 'f' ) { 
          
          one.write(120);
          two.write(150);
          delay(10);
 }
 
 }

  }
}


