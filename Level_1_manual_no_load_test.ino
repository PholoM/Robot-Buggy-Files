int in1 = 28, in2 = 26, in3 = 24, in4 = 22, enA = 4, enB =5;
int speed = 128;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=0; i< 150; i++) {
  //forward on
  Serial.println("forward on");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,HIGH );     digitalWrite(in4, HIGH );
  digitalWrite(in2, LOW );     digitalWrite(in3, LOW);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //forward off
  Serial.println("forward off");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,HIGH );     digitalWrite(in4, HIGH );
  digitalWrite(in2, LOW );     digitalWrite(in3, LOW);

  delay(1000);
}

for (int i=0; i< 150; i++) {
  //forward left on
  Serial.println("forward left on");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, speed);

  digitalWrite(in1,HIGH );     digitalWrite(in4, HIGH );
  digitalWrite(in2, LOW );     digitalWrite(in3, LOW);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //forward left off
  Serial.println("forward left off");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, speed);

  digitalWrite(in1,HIGH );     digitalWrite(in4, HIGH );
  digitalWrite(in2, LOW );     digitalWrite(in3, LOW);

  delay(1000);
}

for (int i=0; i< 150; i++) {
  //forward right on
  Serial.println("forward right on");
  Serial.println(i);
  analogWrite(enA, speed);
  analogWrite(enB, i);

  digitalWrite(in1,HIGH );     digitalWrite(in4, HIGH );
  digitalWrite(in2, LOW );     digitalWrite(in3, LOW);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //forward right off
  Serial.println("forward right off");
  Serial.println(i);
  analogWrite(enA, speed);
  analogWrite(enB, i);

  digitalWrite(in1,HIGH );     digitalWrite(in4, HIGH );
  digitalWrite(in2, LOW );     digitalWrite(in3, LOW);

  delay(1000);
}

//-------------------------------------------------------------------------------------------------------
//Reverse tests
for (int i=0; i< 150; i++) {
  //reverse on
  Serial.println("reverse on");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,LOW );     digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH );     digitalWrite(in3, HIGH);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //reverse off
  Serial.println("reverse off");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,LOW );     digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH );     digitalWrite(in3, HIGH);

  delay(1000);
}

for (int i=0; i< 150; i++) {
  //reverse left on
  Serial.println("reverse left on");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, speed);

  digitalWrite(in1,LOW );     digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH );     digitalWrite(in3, HIGH);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //reverse left off
  Serial.println("reverse left off");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, speed);

  digitalWrite(in1,LOW );     digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH );     digitalWrite(in3, HIGH);

  delay(1000);
}

for (int i=0; i< 150; i++) {
  //reverse right on
  Serial.println("reverse right");
  Serial.println(i);
  analogWrite(enA, speed);
  analogWrite(enB, i);

  digitalWrite(in1,LOW );     digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH );     digitalWrite(in3, HIGH);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //reverse right off
  Serial.println("reverse right off");
  Serial.println(i);
  analogWrite(enA, speed);
  analogWrite(enB, i);

  digitalWrite(in1,LOW );     digitalWrite(in4, LOW);
  digitalWrite(in2, HIGH );     digitalWrite(in3, HIGH);

  delay(1000);
}

//-------------------------------------------------------------------------------------------------------
//Drift tests
for (int i=0; i< 150; i++) {
  //left drift  on
  Serial.println("left drift on");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,LOW );     digitalWrite(in4, HIGH);
  digitalWrite(in2, HIGH );     digitalWrite(in3, LOW);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //drift left off
  Serial.println("drift left off");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,LOW );     digitalWrite(in4, HIGH);
  digitalWrite(in2, HIGH );     digitalWrite(in3, LOW);

  delay(1000);
}

for (int i=0; i< 150; i++) {
  //drift right on
  Serial.println("drift right on");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,HIGH );     digitalWrite(in4, LOW);
  digitalWrite(in2, LOW );     digitalWrite(in3, HIGH);

  delay(1000);
}
for (int i=150; i> 0; i--) {
  //drift right off
  Serial.println("drift right off");
  Serial.println(i);
  analogWrite(enA, i);
  analogWrite(enB, i);

  digitalWrite(in1,HIGH );     digitalWrite(in4, LOW);
  digitalWrite(in2, LOW );     digitalWrite(in3, HIGH);

  delay(1000);
}

while(1) {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}

}
