const int ledpin[] = {1, 2, 3, 4, 5};  
const int num = 5;  

void setup() {
  for (int i = 0; i < num; i++) {
    pinMode(ledpin[i], OUTPUT);
  }
}

void loop() {

 
  for (int i = 0; i < num; i++) {
    if ((i + 1) % 2 == 0) {  
      digitalWrite(ledpin[i], HIGH);
      delay(1000);
      digitalWrite(ledpin[i], LOW);
    }
  }

  
  for (int i = 0; i < num; i++) {
    if ((i + 1) % 2 != 0) {  
      digitalWrite(ledpin[i], HIGH);
      delay(1000);
      digitalWrite(ledpin[i], LOW);
    }
  }
}
