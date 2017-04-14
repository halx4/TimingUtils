#include <CbTimer.h>

CbTimer timer;

void setup() {
  Serial.begin(9600);
  timer.setMode(REPEATING);
  timer.setCallback(print);
  timer.setInterval(1500);
  
  Serial.println("timer starts");
  timer.setEnabled(true);
}

void loop() {
  timer.check();

}

void print(){
  Serial.println("time event!");
}
