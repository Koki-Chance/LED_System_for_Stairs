int Ultrasonic_Measuring(){
  digitalWrite(trigPin, LOW);         // Clears the trigPin
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);        // Sets the trigPin on HIGH state for 10 micro seconds
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);   // Reads the echoPin, returns the sound wave travel time in microseconds
  distance = duration*0.034/2;          // Calculating the distance
  return distance;
}
