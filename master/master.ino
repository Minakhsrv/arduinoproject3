#include<Wire.h>
void setup() {

for (int i=0;i<16;i++){
  pinMode(i,OUTPUT);
  }
  Wire.begin();
  
}
int counter = -1;

void loop() {
  
  Wire.beginTransmission(0x55);
  Wire.beginTransmission(0x56);
  Wire.write(counter);
  Wire.endTransmission();
  counter=counter+1;
  int m;
  if(m<0)
    m=0;
  if(counter>255)
    {
      counter=0;
      DOT8x8(0,counter);
    }
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
