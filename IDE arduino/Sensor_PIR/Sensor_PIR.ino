const int LEDPin = 13;        // pin para el LED
const int PIRPin = 2;
const int pinBuzzer = 8;  // pin de entrada (for PIR sensor)
 
void setup() 
{
   pinMode(LEDPin, OUTPUT); 
   pinMode(PIRPin, INPUT);
   Serial.begin(9600);
}
 
void loop()
{
  int value= digitalRead(PIRPin);
 
  if (value == HIGH)
  {
    digitalWrite(LEDPin, HIGH);
    delay(100);
    digitalWrite(LEDPin, LOW);
    delay(100);
    tone(pinBuzzer, 440);
  }
  else
  {
    digitalWrite(LgitEDPin, LOW);
    noTone(pinBuzzer);
  }
}
