void setup() {
  pinMode(3, OUTPUT);
}

void play() {
  tone(3, 660, 400);
  delay(400);
  tone(3, 622, 400);
  delay(400);
  tone(3, 660, 400);
  delay(400);
  tone(3, 622, 400);
  delay(400);
  tone(3, 660, 400);
  delay(400);
  tone(3, 494, 400);
  delay(400);
  tone(3, 587, 400);
  delay(400);
  tone(3, 523, 400);
  delay(400);
  tone(3, 440, 400);

  delay(1000);
}

void loop() {
  suona();
  delay(2000);
}
