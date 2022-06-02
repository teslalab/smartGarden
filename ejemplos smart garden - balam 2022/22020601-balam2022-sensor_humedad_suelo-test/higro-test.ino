/*
 * Código de prueba para Balam 2022.
 * Mediciones digitales con sensor de humedad de tierra.
 * 
 * Oscar Rodas / Tesla Lab / Universidad Galileo
 * 
 */

#define hPinD 19  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(hPinD,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.print("Valor higrometro digital: ");
 Serial.println(digitalRead(hPinD));
 delay(1000);  
}
