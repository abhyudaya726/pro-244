#define buzzer_pin 32

int touch_1;
int touch_2;
int touch_3;
int touch_4;
int touch_5;

const int thershold = 30;

void setup() {
  pinMode(buzzer_pin,OUTPUT);
  Serial.begin(115200);
  delay(5000);
  digitalWrite(buzzer_pin,LOW);
}

void loop() {
  touch_1 = touchRead(T4);
  touch_2 = touchRead(T5);
  touch_3 = touchRead(T6);
  touch_4 = touchRead(T7);
  touch_5 = touchRead(T8);

  Serial.print(touch_1);
  Serial.println(" ");
  delay(100);

  if(touch_1 < thershold){
    for (int i = 0; i<5; i++){
      digitalWrite(buzzer_pin,HIGH);
      delay(50);
      digitalWrite(buzzer_pin,LOW);
      delay(50);
    }
  }
  if(touch_2 < thershold){
    for (int i = 0; i<5; i++){
      digitalWrite(buzzer_pin,HIGH);
      delay(200);
      digitalWrite(buzzer_pin,LOW);
      delay(200);
    }
  }
  if(touch_3 < thershold){
    for (int i = 0; i<5; i++){
      digitalWrite(buzzer_pin,HIGH);
      delay(150);
      digitalWrite(buzzer_pin,LOW);
      delay(200);
    }
  }
  if(touch_4 < thershold){
    for (int i = 0; i<5; i++){
      digitalWrite(buzzer_pin,HIGH);
      delay(100);
      digitalWrite(buzzer_pin,LOW);
      delay(200);
    }
  }
  if(touch_5 < thershold){
    for (int i = 0; i<5; i++){
      digitalWrite(buzzer_pin,HIGH);
      delay(50);
      digitalWrite(buzzer_pin,LOW);
      delay(200);
    }
  }
  else{
    digitalWrite(2,LOW);
  }
}
