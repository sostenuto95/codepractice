adc => Gain squarer => blackhole;
adc => squarer;
3 => squarer.op;

while(true) {
   ms => now;
   squarer.last() => float power;
   if(power >0.01){
       <<< "LOUD!!!",power,"LOUDER!!!" >>>;
   }
   else {
       <<< "Power =" , power >>>;
   }
}