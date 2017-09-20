//ardiuno used pins
const int s1 = 0;
const int s2 = 1;
const int s3 = 2;
const int s4 = 3;

int del = 0; // delay between single mottor step

void setup() {                
  pinMode(s1, OUTPUT);     
  pinMode(s2, OUTPUT);     
  pinMode(s3, OUTPUT);     
  pinMode(s4, OUTPUT);

  Serial.begin(463611);
  Serial.setTimeout(0);
}

void loop() {
  while(!Serial.available()); //Wait for data from PC
  del = Serial.readString().toInt(); //Sets delay recived from PC
  forwards(); //Execute one step forward 
  Serial.println(1); //Send data to PC through serial
}

//Sets stepper engine current position
void motorOff(){
  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
}

//Backwards step
void backwards(){

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del);              

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del);              
}

//Forwards step
void forwards(){

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);              

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del);               
}

//Full backward step
void backwardsFull(){

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del*2);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del*2);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del*2);              

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del*2);              
}

//Full forward step
void forwardsFull(){

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, HIGH); 
  delayMicroseconds(del*2);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del*2);              

  digitalWrite(s1, LOW); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del*2);              

  digitalWrite(s1, HIGH); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
  delayMicroseconds(del*2);              
}



