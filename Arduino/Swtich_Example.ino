void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 int x = 5;
 switch (x) {
  case 1 ... 10:
   Serial.println("Choice 1");
   break;
  case 11 ... 20:
   Serial.println("Choice 2");
   break;
  case 21 ... 30:
   Serial.println("Choice 3");
   break;
  case 31 ... 40:
   Serial.println("Choice 4");
   break;
  case 41 ... 50:
   Serial.println("Choice 5");
   break;
  default:
   Serial.println("you haven't make a choice yet");
   break;
  
 }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
