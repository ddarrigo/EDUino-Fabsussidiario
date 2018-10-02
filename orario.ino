void orario(){
  myServoCentral.attach(centralPin);    
  myServoRight.attach(rightPin);
  myServoLeft.attach(leftPin);
  
  //if(oldCommand!="antiorario"&&oldCommand!="indietro"){
  if(myServoRight.read()!=centrals[2]-excursions[0]){
   //lift up right side
  for(int i=0;i<=excursions[1];i++){
    myServoCentral.write(centrals[1]-excursions[1]);
    delay(Speed);
  }
  //move back right legs
  for(int i=0;i<=excursions[0];i++){
    myServoRight.write(centrals[2]-i);
    delay(Speed);
  }
  
  //lift up left side 
  for(int i=0;i<=excursions[1];i++){
    myServoCentral.write(centrals[1]+excursions[1]);
    delay(Speed);
  }
  //move ahead left legs
  for(int i=0;i<=excursions[0];i++){
    myServoLeft.write(centrals[0]-i);
    delay(Speed);
  }    
  }
  
  //lift up right side 
  for(int i=0;i<=excursions[1];i++){
    myServoCentral.write(centrals[1]-excursions[1]);
    delay(Speed);
  }
  //move back left legs
  for(int i=0;i<=excursions[0];i++){
    myServoLeft.write(centrals[0]+i);
    delay(Speed);
  }
  //lift up left side 
  for(int i=0;i<=excursions[1];i++){
    myServoCentral.write(centrals[1]+excursions[1]);
    delay(Speed);
  }
  //move ahead right legs
  for(int i=0;i<=excursions[0];i++){
    myServoRight.write(centrals[2]+i);
    delay(Speed);
  }
  delay(58);
  myServoRight.detach();
  myServoLeft.detach();
  myServoCentral.detach();  
}
