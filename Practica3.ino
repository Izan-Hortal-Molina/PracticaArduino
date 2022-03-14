int LEDarray= (8,9,10,11,12);
int nPin=0;
int temps =30;

void setup() {
  // put your setup code here, to run once:
for(nPin=o;nPin<5;nPin++)
pinMode(LEDarray (nPin),OUTPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
for(nPin=o;nPin<5;nPin++)
digitalWrite(LEDarray(nPin),HIGH);
delay(temps)
digitalWrite(LEDarray(nPin+1),HIGH);
delay(temps)
digitalWrite(LEDarray(nPin),LOW)
delay(temps*2)

}
for(nPin=o;nPin<5;nPin--)
{
  digitalWrite(LEDarray(nPin),HIGH);
delay(temps)
digitalWrite(LEDarray(nPin-1),HIGH);
delay(temps)
digitalWrite(LEDarray(nPin),LOW)
delay(temps*2)

  
  
  
  }
