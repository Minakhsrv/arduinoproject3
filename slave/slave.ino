#include<Wire.h>
int counter = 0;
int k = 7;
void Receiv_Event(){
  while(Wire.available()){
    counter=Wire.read();
    }
  }
void setup() {
 
for (int i=0;i<16;i++){
  pinMode(i,OUTPUT);
  }
  Wire.begin(0x56);
  Wire.onReceive(Receiv_Event);
}

void loop() {

 
  
  DOT8x8(0,counter);
}
void DOT8x8(int a,int b){
for(int i=0;i<8;i++){

  if(i==a){
    digitalWrite(i,HIGH);
    }
   
    if(i==b){
    digitalWrite(i+8,HIGH);
    }
  }
}
