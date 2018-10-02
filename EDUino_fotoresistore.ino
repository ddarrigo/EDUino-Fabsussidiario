#include <Servo.h>
//variabili fotores
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
int centrals[]={90,88,66}; //left center right
int excursions[]={35,12};

int ledPin=13;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  int soundWave=analogRead(audioPin);
  sensitivity=analogRead(A1);
  Serial.println(soundWave);
  if(soundWave>sensitivity){
    digitalWrite(ledPin,HIGH);   
    Serial.print("move!");
    for(int i=0;i<1;i++)
      avanti();
  }else{
    digitalWrite(ledPin,LOW);
  }
  //Serial.println(sensitivity);
  delay(10);
}
