int LED=10;
int boto=6;
bool estatActual=0;
bool estatAnterior=0;
int pulsacions=1


void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(boto,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 estatActual= digitalRead(boto);

if(estatAnterior!=estatActual)

}
if(estatActual!=estatActual)

if(estatActual==HIGH) pulsacions++;
estatAnterior=estatActual;
