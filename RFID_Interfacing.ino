#include <SoftwareSerial.h>
 int count =0;
//  boolean red=0;
  boolean green=0;
  boolean bio=0;
  //boolean nonbio=0;
SoftwareSerial mySerial(9, 10);
void setup()
{
  mySerial.begin(9600); // Setting the baud rate of Software Serial Library  
  Serial.begin(9600);  //Setting the baud rate of Serial Monitor 
 }
 
 void loop()
{
    
 if(mySerial.available()>0)
  {
  Serial.write(mySerial.read());
  }

 
  if (bio==true){
    if(green){
      count=count+3;
    }
    else{
      count=count-2;
    }

  }

  else{
    if(!green){
      count=count+3;
    }

    else{
      count =count-2;
    }
  }

 }
