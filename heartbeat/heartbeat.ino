
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  int time = millis()/1000 + 1;
  Serial.print(time);
  Serial.println(" sec have elapsed");
}
