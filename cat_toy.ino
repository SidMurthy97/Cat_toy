#include <Servo.h>

Servo servoh,servo; // creates servo objects to control  servos

void setup() {
  servo.attach(9); // attaches the servo on pin 9 to the servo obect
  Serial.begin(9600);
}

void loop() {
  int random_number = random(0, 180); 

  int pos = servo.read();

  Serial.println(random_number);

  if (random_number > pos) { //determines direction in which servo will move 
    for (int i = pos; i < random_number; i++) {
      delay(10);
      servo.write(i);
    }
  }

  else{
    for (int i = pos; i > random_number; i--) {
      delay(10);
      servo.write(i);
    
    
    }
  }





}
