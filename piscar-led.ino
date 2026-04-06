// Piscar LED 💡
// Seu primeiro projeto no Arduino: fazer um LED acender e apagar automaticamente em intervalos de .5s.

int pin = 8;

void setup(){
  pinMode(pin, OUTPUT);
}


void loop(){
  digitalWrite(pin, HIGH);
  delay(500);

  digitalWrite(pin, LOW);
  delay(500);
}