#include <TaskScheduler.h>

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led, INPUT);
}

void loop() {
  if (digitalRead(pin, idk)) {
     Scheduler.StartLoop(Repeater)
  else
      Scheduler.StopLoop(Repeater)
  }
}

void setLED(bool a) {
  if (a = true) {
    digitalWrite(true);
      else
      digitalWrite(false);
  }
}
void Repeater() {
  delay(100)
  setLED(true)
  delay(500)
  setLED(false)
}
