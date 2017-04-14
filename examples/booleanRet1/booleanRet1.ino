#include <BrTimer.h>

BrTimer timer;

void setup() {
  Serial.begin(9600);
  timer.setMode(REPEATING);
  timer.setInterval(1500);
  
  Serial.println("timer starts");
  timer.setEnabled(true);
}

void loop() {
  if(timer.check())print();

}

void print(){
  Serial.println("time event!");
}
