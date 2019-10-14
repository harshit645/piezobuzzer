
int buzzer = 9;    // buzzer connected to digital pin 9

void setup() {
  // nothing happens in setup
}

void loop() {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
 
    analogWrite(buzzer, fadeValue);
    delay(1000);
  }

  
}
