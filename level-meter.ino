int sensorPin = A0;
int ledPin = 13;
int ledPin1 = 12;
int ledPin2 = 11;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 250 & sensorValue < 500)
  {
  digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
  }
  else if (sensorValue > 500 & sensorValue < 750)
  {
  digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
  }
  else if (sensorValue > 750)
  {
  digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
  }
  else
  {
  digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
  }
}

