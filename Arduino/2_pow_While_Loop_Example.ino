void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
int multiple = 1;
while(multiple<=10){
  Serial.println(multiple*2);
  multiple++;
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
