int pin=0
void setup() {
  // put your setup code here, to run once:
for(pin=1; pin<5;pin++)
pinMode(pin,OUTPUT)
}

void loop() {
  // put your main code here, to run repeatedly:

for(pin=1; pin<5; pin++)
digitalWrite(pin,HIGH)
delay(600)
digitalWrite(pin,LOW
delay(600)
}
