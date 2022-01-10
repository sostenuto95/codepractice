void setup() {
  // put your setup code here, to run once:
 

Serial.begin(9600);
int multiple = 1;
while(multiple<=10){
  Serial.println(2*multiple);
  multiple++;
 if(multiple==5) {
  Serial.println("Breaking the loop");
  break;
  }
 }
}
void loop() {
  // put your main code here, to run repeatedly:

}
