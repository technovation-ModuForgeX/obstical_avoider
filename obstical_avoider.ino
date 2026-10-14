long distance,duration;
void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
}

void loop() {
int LS=analogRead(A1);
int RS=analogRead(A0);
if (LS>100 and RS>100){
forward() ;
}
if (LS<100 and RS>100){
right();
delay(600);
}
if (LS>100 and RS<100){
left(); 
delay(600);
}
if (LS<100 and RS<100){
backward() ;
delay(2000);
right();
delay(600);

}
}

void forward() {
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);  
}
void backward() {
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(14,LOW);
digitalWrite(15,HIGH);  
}
void pause() {
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
}

void left() {
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);  
}
void right() {
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,HIGH);
}
