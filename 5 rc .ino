



void setup()
{
for (int i=3;i<=6;i++){
  pinMode(i,1);}
  
  Serial.begin(9600);
  
  }  
 
void loop()
{
 if(Serial.available()){
 char reading =Serial.read();
switch (reading){
  
  case 'f': 
    for(int i=3;i<=6;i=i+2){
      digitalWrite(i,1);
      }
      digitalWrite(4,0);
            digitalWrite(6,0);
  analogWrite(9,255);
    analogWrite(10,255);


      break;
      
  case 'b':
  digitalWrite(3,0);
    digitalWrite(5,0);

  digitalWrite(4,1);
  digitalWrite(6,1);
  analogWrite(9,255);
    analogWrite(10,255);

      break;
  case 'r':
  digitalWrite(3,1);
  digitalWrite(4,0);
    digitalWrite(6,0);
    digitalWrite(5,0);
  analogWrite(9,255);
    analogWrite(10,0);

    break;
  case 'l':
  digitalWrite(5,1);
  digitalWrite(3,0);
        digitalWrite(4,0);
      digitalWrite(6,0);
  analogWrite(9,0);
    analogWrite(10,255);


   break;
   case 's':
    for(int y=3;y<=6;y++){
      digitalWrite(y,0);
      }
  analogWrite(9,0);
    analogWrite(10,0);

      break;
}
     

  
  
  
  
  
  

 }
}



 
 





 


  