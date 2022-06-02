/*
 * Código de prueba para Balam 2022.
 * Mediciones digitales con sensor de humedad de tierra.
 * 
 * Oscar Rodas / Tesla Lab / Universidad Galileo
 * 
 */

#include "SI1133.h" //Library can be downloaded from download section below

SI1133 uv = SI1133();

void setup() {
  Serial.begin(9600);
  Serial.println(" | 14CORE | Si1133 Test Code ");
  Serial.println(" Initializing ...............");
  delay(2000);
  if (! uv.begin()) {
    Serial.println("Check Serial Communication");
    while (1);
  }
  Serial.println("Si1133 Data Communication Ready");
  Serial.println("Reading .......................");
  delay(1000);
  
}

void loop() {

  //Código Sensor UV
  
  uint32_t uvData = uv.readUV();
  float irData = uv.readIR();

  Serial.print("Infrared Raw Data : ");  
  Serial.println(irData,BIN);

  Serial.print("UV - Ultraviolet Raw Data : ");  
  Serial.println(uvData, BIN);

  Serial.print(" UV Fin : ");  
  Serial.println(uvData);

  if(uvData >545){
    Serial.println(" : 14 ");
  }
  
  else
  Serial.print(" UVI : ");  
  Serial.println(0.0082* (0.00391 * uvData * uvData + uvData ));
  uv.printOut();
  delay(5000);  
}
