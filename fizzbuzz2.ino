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

  if (i % 3 == 0 && i % 5 == 0)
  { lightBothLEDS(pinFizzLed);
    lightBothLEDS(pinBuzzLed);
    Serial.println("FizzBuzz");
    delay(1000); // This helps them to turn on and off at the same time. If the delay was included in the function, they would have time diffenence
    turnOffLed(pinFizzLed);
    turnOffLed(pinBuzzLed);
  }

  else if (i % 3 == 0)
  { turnOnLED(pinFizzLed);
    Serial.println("Fizz");
  }
  else if (i % 5 == 0)
  { turnOnLED(pinBuzzLed);
    Serial.println("Buzz");
  }
  else Serial.println(i);

}

void turnOnLED(int pin)
{
  digitalWrite(pin, HIGH); // turn LED on
  delay(1000);
  digitalWrite(pin, LOW); // turn LED off
  delay(1000);
}
void lightBothLEDS(int pin) {
  digitalWrite(pin, HIGH); // turn LED on
}
void  turnOffLed(int pin)
{ 
  digitalWrite(pin, LOW); // turn LED off
}
