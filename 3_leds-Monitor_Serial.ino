int ledR = 13;
int ledG = 12;
int ledB = 11;
int t1;
int t2;
int t3;

void setup() {
Serial.begin(9600);
Serial.println("¿Cuánto tiempo de encendico y apagado del led rojo?");
while(Serial.available()==0){
  }
t1 = Serial.parseInt();
Serial.end();
Serial.begin(9600);
Serial.println("¿Cuánto tiempo de encendico y apagado del led verde?");
while(Serial.available()==0){
  }
t2 = Serial.parseInt();
Serial.end();
Serial.begin(9600);
Serial.println("¿Cuánto tiempo de encendico y apagado del led azul?");
while(Serial.available()==0){
  }
t3 = Serial.parseInt();
Serial.end();
pinMode(ledR,OUTPUT);
pinMode(ledG,OUTPUT);
pinMode(ledB,OUTPUT);
}

void loop() {
digitalWrite(ledR,HIGH);
delay(t1);
digitalWrite(ledR,LOW);
delay(t1);
digitalWrite(ledG,HIGH);
delay(t2);
digitalWrite(ledG,LOW);
delay(t2);
digitalWrite(ledB,HIGH);
delay(t3);
digitalWrite(ledB,LOW);
delay(t3);
}
