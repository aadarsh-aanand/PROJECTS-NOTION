int WATER = 0;

int analog = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(A5, INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  WATER = digitalRead(2);
  analog = analogRead(A5);
  analogWrite(9,70);
  Serial.println(WATER);
  Serial.println(analog);
  if (WATER < 1) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
