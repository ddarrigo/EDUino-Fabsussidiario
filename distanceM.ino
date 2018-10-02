float distanceM(){
  digitalWrite(trigPin,0);
  delayMicroseconds(3);
  digitalWrite(trigPin,1);
  delayMicroseconds(5);
  digitalWrite(trigPin,0);
  //listen for echo
  float tUs=pulseIn(echoPin,1); //microseconds
  float t =tUs/1000.0/1000.0/2; //s.
  float d=t*v;//m.
  return d*100;//cm
}

