// C++ code
#include <Arduino.h>
int counter;
int RelePin = 9;
int EstRele = 0;
int LedPin = 3;
int BotaoPin = 2;
int Leitura;

void setup(){
  pinMode(RelePin, OUTPUT);
  pinMode(LedPin, OUTPUT);
  pinMode(BotaoPin, INPUT_PULLUP);

  digitalWrite(RelePin,HIGH);
}

void loop()
{
  if ((digitalRead(BotaoPin) == LOW ) && (EstRele == 0)){
    for (counter = 0; counter < 5; ++counter) {
      digitalWrite(LedPin, HIGH);
      delay(1000);
      digitalWrite(LedPin, LOW);
      delay(1000); 
    }
    digitalWrite(RelePin, LOW);
    digitalWrite(LedPin, HIGH);
    delay(7000); 
    digitalWrite(RelePin, HIGH); 
    delay(3000);
    digitalWrite(RelePin, LOW);
    delay(1000);
    digitalWrite(LedPin, LOW);
  }else{
    digitalWrite(RelePin, LOW);
    EstRele = 0;
    delay(100);
  }
}
