void indietro(){
  myServoCentral.attach(centralPin);  
  myServoLeft.attach(leftPin);
  myServoRight.attach(rightPin);  
  
  //lift up right side
  if(myServoLeft.read()!=centrals[0]+excursions[0]){
  for(int i=0;i<=excursions[1];i++){
    myServoCentral.write(centrals[1]-excursions[1]);
    delay(Speed);
  }
  //move back left legs
  for(int i=0;i<=excursions[0];i++){
    myServoLeft.write(centrals[0]+i);
    delay(Speed);
  }
  //move ahead right legs
  for(int i=0;i<=excursions[0];i++){
    myServoRight.write(centrals[2]+i);
    delay(Speed);
  }
  }
  //lift up left side 
  for(int i=0;i<=excursions[1];i++){
    myServoCentral.write(centrals[1]+excursions[1]);
    delay(Speed);
  }
  
  //move back right legs
  for(int i=0;i<=excursions[0];i++){
    myServoRight.write(centrals[2]-i);
    delay(Speed);
  }
  //move ahead left legs
  for(int i=0;i<=excursions[0];i++){
    myServoLeft.write(centrals[0]-i);
    delay(Speed);
  }
  delay(58);
  myServoCentral.detach();
  myServoRight.detach();
  myServoLeft.detach();    
}
