int temperature = 81;
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  if (temperature < 50 && temperature > 10){
  // Green Light
   digitalWrite(6, HIGH);
   delay(2000); // Wait for 2000 millisecond(s)
   digitalWrite(6, LOW);
   delay(2000); // Wait for 2000 millisecond(s)
  }
  else if (temperature > 50 && temperature < 70){
  // Red Light
   digitalWrite(7, HIGH);
   delay(300); // Wait for 300 millisecond(s)
   digitalWrite(7, LOW);
   delay(300); // Wait for 300 millisecond(s)
  }
  else {
    // Blue Light
   digitalWrite(8, HIGH);
   delay(500); // Wait for 500 millisecond(s)
   digitalWrite(8, LOW);
   delay(500); // Wait for 500 millisecond(s)
  }
}