// C++ code
//
int ledPin = 11;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
 // fade in from min to max
  for(int fadeValue = 0; fadeValue<=255; fadeValue +=5){
  analogWrite(ledPin, fadeValue);
    delay(30);
}
 // fade out form max to min 
  for(int fadeValue = 255; fadeValue >=0; fadeValue-=5){
  analogWrite(ledPin, fadeValue);
    delay(30);
  }
}