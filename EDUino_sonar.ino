#include <Servo.h>

//variabili ultrasonic
int trigPin=3;
int echoPin=2;
float v=331.5+0.6*20; //m/s
int sensorIndex=0;
int score=0;
int values[4];
int soglia=9;

//variabili motori
Servo myServoCentral;
Servo myServoRight;
Servo myServoLeft;

const int centralPin=8;
const int rightPin=9;
const int leftPin=10;

float Speed=6;   
int centrals[]={90,82,73}; //left center right
int excursions[]={35,12};

void setup() {
  Serial.begin(115200);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  int d=distanceM();
  values[sensorIndex]=d;
  sensorIndex++;
  Serial.println(d,DEC);
  if(sensorIndex>=3){
    for(int i=0;i<4-1;i++){
      if(values[i]==values[i+1])
        score++;
    }
    if(score>=3&&values[0]<soglia){
      Serial.println("do!");
      indietro();
      indietro();
      int dice=int(random(2));
      Serial.println(dice);
      //int dice2=random(2,4);
      if(dice==0){        
        for(byte i=0;i<4;i++)
          orario();
      }
      if(dice==1){
        for(byte i=0;i<3;i++)
          antiorario();
      }
      score=0;
    }
    sensorIndex=0;
  }  
  delay(5); //ms 
 }
