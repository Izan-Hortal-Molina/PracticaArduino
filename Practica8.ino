void setup() {
  // put your setup code here, to run once:
for(int i =9 ; i<12 ; i++)
pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Color(random(255),random(255), random(255)) ;
delay(500);
}
void Color(int R, int G, int B)
{
  analogWrite(9,R) ;
  analogWrite(10,G);
  analogWrite(11,B);
}
