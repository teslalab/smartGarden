/*
  Código adaptado para Balam 2022
  En este código se tomó de referencia código en el Internet generado por Electropeak y 
  se modificó para los pines en nuestra propio kit.
  Código trabajo por: Oscar Rodas / Tesla Lab / Universidad Galileo
  
  DRV8833-Dual-Motor-Driver-Module
  made on 23 Nov 2020
  by Amir Mohammad Shojaee @ Electropeak
  Home

*/

#define AIN1 32
#define AIN2 33
#define BIN1 25
#define BIN2 26

void setup() {
  Serial.begin(9600);
  
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
  
}
 
void loop() {
  
  digitalWrite(AIN1,HIGH); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH); 
  digitalWrite(BIN2,LOW);

  delay(100);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);
  
  delay(1000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,HIGH);

  delay(100);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);
  
  delay(1000);
   
}
