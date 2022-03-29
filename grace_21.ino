int Green1=12;
int Green2=10;
int Yellow1=6;
int Yellow2=3;
int Red1= 2;
int Red2= 1;

void setup()
{
  pinMode(Green1,OUTPUT);
  pinMode(Green2,OUTPUT);
  pinMode(Yellow1,OUTPUT);
  pinMode(Yellow2,OUTPUT);
  pinMode(Red1,OUTPUT);
  pinMode(Red2,OUTPUT);

  
}

void loop()
{
  digitalWrite(Green1, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Yellow1,LOW);
  digitalWrite(Yellow2,LOW);
  digitalWrite(Red1,LOW);
  digitalWrite(Red2, HIGH);
  delay(9000);

  
  digitalWrite(Green1, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Yellow1,HIGH);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Red1,LOW);
  digitalWrite(Red2, LOW);
  delay(4000);
  
  
  digitalWrite(Green2, LOW);
  digitalWrite(Green1, HIGH);
  digitalWrite(Yellow1,LOW);
  digitalWrite(Yellow2,LOW);
  digitalWrite(Red1,HIGH);
  digitalWrite(Red2, LOW);
  delay(9000);
  
  
  
  
  
}