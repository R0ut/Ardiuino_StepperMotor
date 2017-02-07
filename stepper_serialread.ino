//511 to wtedy mam 360 stopni 
//krok to +/- 0.7045 stopnia 14 kroków to skok co 9,86 stopni


const int s1 = 8;
const int s2 = 9;
const int s3 = 10;
const int s4 = 11;
int del = 5000;
int teller = 0;
int chose = 0;
int stepp = 0;
void setup() {                
  pinMode(s1, OUTPUT);     
  pinMode(s2, OUTPUT);     
  pinMode(s3, OUTPUT);     
  pinMode(s4, OUTPUT);
 

}

void loop() {
  
  del = 3000; // delay im mniejszy tym szybciej sie wykona obrot
  //900 max szybko
  menu();
  Serial.flush(); 
  while(!Serial.available()) ; 
  stepp = Serial.parseInt();
  
  
  information();
  for (int i=0; i<=stepp; i++){
       if(chose == 1) forwards();
       else if(chose == 2) backwards();
  //   forwardsFull();
  //   backwardsFull();
  };
  
  motorOff();
  delay(10);  
}

void menu(){
  Serial.print("\nMenu\n");
  Serial.print("1.Prawo\n");
  Serial.print("2.Lewo\n");
  Serial.print(">>");
  while(!Serial.available());
  chose = Serial.parseInt();
  Serial.print("\n Jaka wartosc obrotu?(14=10 stopni)");
}

void information()
{
  Serial.print("\n\nWybrales opcje nr ");
  Serial.print(chose);
  Serial.print(" silnik obroci sie o ");
  double radius = stepp * 0.7045;
  Serial.print(radius);
  Serial.print(" stopni");
}

void motorOff(){
  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW); 
  digitalWrite(s3, LOW); 
  digitalWrite(s4, LOW); 
}

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



