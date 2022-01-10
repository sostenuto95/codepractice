void setup() {
  // put your setup code here, to run once:
 
int multiple = 1;
Serial.begin(9600);
do{
  Serial.println(multiple*2);
  multiple++;
} while(multiple<=10);
}

void loop() {
  // put your main code here, to run repeatedly:

}
