int pinFizzLed = 2;
int pinBuzzLed = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode (pinFizzLed, OUTPUT);
  pinMode (pinBuzzLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i <= 100; i++) {
    FizzBuzz(i); // calling Fizzbuzz function
    delay (1000);
  }
}

void FizzBuzz (int i) {
  bool turnOn = 0;

  if (i % 3 == 0)
  { turnOnLED(pinFizzLed);
    turnOn = 1;
  }
  if (i % 5 == 0)
  { turnOnLED(pinBuzzLed);
    turnOn = 1;
  }
  if (turnOn == 0)
  { Serial.println(i);
  }
  delay(800);
  turnOffLed(pinFizzLed);
  turnOffLed(pinBuzzLed);
}

void turnOnLED(int pin)
{
  digitalWrite(pin, HIGH); // turn LED on
}
void  turnOffLed(int pin)
{ 
  digitalWrite(pin, LOW); // turn LED off
}
