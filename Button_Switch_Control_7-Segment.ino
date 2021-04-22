int f = 8;
int g = 7;
int e = 6;
int d = 5;
int c = 4;
int b = 3;
int a = 2;
int count = 0;

int key1 = 9;
int key2 = 10;
void setup() {
  pinMode(key1,INPUT_PULLUP);
  pinMode(key2,INPUT_PULLUP);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
}
void loop() 
{
  if(digitalRead(key1) == LOW){
    delay(10);
    if(digitalRead(key1) == HIGH){
      count--;
    }
  }
  if(digitalRead(key2) == LOW){
    delay(10);
    if(digitalRead(key2) == HIGH){
      count++;
    }
  }
  if(count > 9){
    count = 9;
  }
  if(count < 0){
    count = 0;
  }
  if(count == 0){
    Print0();
  }
  else if(count == 1){
     Print1();
  }
  else if(count == 2){
     Print2();
  }
  else if(count == 3){
     Print3();
  }
  else if(count == 4){
     Print4();
  }
  else if(count == 5){
     Print5();
  }
  else if(count == 6){
     Print6();
  }
  else if(count == 7){
     Print7();
  }
  else if(count == 8){
     Print8();
  }
  else if(count == 9){
     Print9();
  }
  
}
void Print0(){
  digitalWrite(a,0); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,0);  
  digitalWrite(e,0);  
  digitalWrite(f,0);  
  digitalWrite(g,1); 
}
void Print1(){
  digitalWrite(a,1); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,1);  
  digitalWrite(e,1);  
  digitalWrite(f,1);  
  digitalWrite(g,1); 
}
void Print2(){
  digitalWrite(a,0); 
  digitalWrite(b,0);  
  digitalWrite(c,1);  
  digitalWrite(d,0);  
  digitalWrite(e,0);  
  digitalWrite(f,1);  
  digitalWrite(g,0); 
}
void Print3(){
  digitalWrite(a,0); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,0);  
  digitalWrite(e,1);  
  digitalWrite(f,1);  
  digitalWrite(g,0); 
}
void Print4(){
  digitalWrite(a,1); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,1);  
  digitalWrite(e,1);  
  digitalWrite(f,0);  
  digitalWrite(g,0); 
}
void Print5(){
  digitalWrite(a,0); 
  digitalWrite(b,1);  
  digitalWrite(c,0);  
  digitalWrite(d,0);  
  digitalWrite(e,1);  
  digitalWrite(f,0);  
  digitalWrite(g,0); 
}
void Print6(){
  digitalWrite(a,0); 
  digitalWrite(b,1);  
  digitalWrite(c,0);  
  digitalWrite(d,0);  
  digitalWrite(e,0);  
  digitalWrite(f,0);  
  digitalWrite(g,0); 
}
void Print7(){
  digitalWrite(a,0); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,1);  
  digitalWrite(e,1);  
  digitalWrite(f,1);  
  digitalWrite(g,1); 
}
void Print8(){
  digitalWrite(a,0); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,0);  
  digitalWrite(e,0);  
  digitalWrite(f,0);  
  digitalWrite(g,0); 
}
void Print9(){
  digitalWrite(a,0); 
  digitalWrite(b,0);  
  digitalWrite(c,0);  
  digitalWrite(d,0);  
  digitalWrite(e,1);  
  digitalWrite(f,0);  
  digitalWrite(g,0); 
}
