void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  int potValue = analogRead(A0);
  Serial.print(potValue);
  delay(1000); // Delay to avoid data being sent too fast
  
  if (potValue > 500) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}