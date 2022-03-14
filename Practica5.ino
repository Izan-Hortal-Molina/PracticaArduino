int LEDarray() = {9,10,11}
int nPin=0
int velocitat= 10;
int pwm;
void setup() {
  // put your setup code here, to run once:
for(nPin=0;nPin<4;nPin++)
}
pinMode(LEDarray(nPin),OUTPUT);
nPin=0
void loop() {
  // put your main code here, to run repeatedly:
for(pwm=0; pwm<256; pwm++)
}
{
  analogWrite(LEDarray(nPin),pwm);
  delay(velocitat)
}
for(pwm=256;pwm>-1; pwm--)
{
  analogWrite(LEDarray(nPin),pwm);
  delay(velocitat);
}
nPin++
if(nPin==3) nPin=0
