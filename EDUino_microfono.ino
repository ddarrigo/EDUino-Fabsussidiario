#include <Servo.h>
//variabili mic
const int audioPin=A0;
int sensitivity=850;
//variabili motori
Servo myServoCentral;
Servo myServoRight;
Servo myServoLeft;

const int centralPin=8;
const int rightPin=9;
const int leftPin=10;

float Speed=6;   
int centrals[]={69,45,80}; //left center right
int excursions[]={35,12};

void setup() {
  Serial.begin(115200);
}

void loop() {
  int soundWave=analogRead(audioPin);
  sensitivity=analogRead(A1);
  //Serial.println(soundWave);
  if(soundWave>sensitivity){
    tone(13,261,500);   //DO
    delay(500);
    tone(13,392,500);   //SOL
    delay(500);
    tone(13,494,500);   //SI
    delay(500);
    Serial.print("sound!");
    for(int i=0;i<2;i++)
      avanti();
  }else{
    noTone(13);
  }
  Serial.println(sensitivity);
  delay(10);
}
