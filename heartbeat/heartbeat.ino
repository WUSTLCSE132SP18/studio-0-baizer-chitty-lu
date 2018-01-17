
const int doPin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(doPin, OUTPUT);
}

void loop() {
  int time = millis()/1000+1;
  Serial.print(time);
  Serial.println(" sec have elapsed");

  digitalWrite(doPin, HIGH);
  delay(500);
  digitalWrite(doPin, LOW);
  delay(500);
}
