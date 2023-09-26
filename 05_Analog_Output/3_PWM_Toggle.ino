const int LED = 11;
const int buttonPin = 2;

int LEDState = LOW;
int buttonState = LOW;
int lastButtonState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  delay(10);

  if (buttonState == HIGH && lastButtonState == LOW) {
    LEDState = !LEDState;
  } else {
  }
  lastButtonState = buttonState;
  if (LEDState == 1) {
    for (int i = 0; i <=255; i += 5) {
      analogWrite(LED, i);
      delay(50);
    }
  } else {
   for (int i = 255; i >= 0; i -= 5) {
      analogWrite(LED, i);
      delay(50);
    }
  }
 }
