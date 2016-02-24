int led1 = 2;
int led2 = 4;
int led3 = 7;
int led4 = 8;


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  
  byte signal;
  if(Serial.available()) {
    Serial.println(signal);
    if (signal > 1) {
       digitalWrite(led3,HIGH);
    }
  }
  
  int sensorvalue = analogRead(A0);
  //Serial.println(sensorvalue);
  
  
  if (sensorvalue >= 0 && sensorvalue < 600) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
 else if (sensorvalue >= 600 && sensorvalue < 800) {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
  }
  
  delay(300);
  
}