#include <Wire.h> //Include Wire Library
#include "SI1133.h" //Library can be downloaded from download section below
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include "Adafruit_BME680.h"

#define BME_SCK 13
#define BME_MISO 12
#define BME_MOSI 11
#define BME_CS 10

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME680 bme; // I2C


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

  Serial.println("Sensor UV OK.......................");

  while (!Serial);
  
  Serial.println(F("BME680 test"));

  if (!bme.begin()) {
    Serial.println("Could not find a valid BME680 sensor, check wiring!");
    while (1);
  }

  // Set up oversampling and filter initialization
  bme.setTemperatureOversampling(BME680_OS_8X);
  bme.setHumidityOversampling(BME680_OS_2X);
  bme.setPressureOversampling(BME680_OS_4X);
  bme.setIIRFilterSize(BME680_FILTER_SIZE_3);
  bme.setGasHeater(320, 150); // 320*C for 150 ms

  Serial.println("BME688 OK.......................");
  
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
  delay(1000);

  //Código BME688

  if (! bme.performReading()) {
    Serial.println("Failed to perform reading :(");
    return;
  }
  
  Serial.print("Temperature = ");
  Serial.print(bme.temperature);
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(bme.pressure / 100.0);
  Serial.println(" hPa");

  Serial.print("Humidity = ");
  Serial.print(bme.humidity);
  Serial.println(" %");

  Serial.print("Gas = ");
  Serial.print(bme.gas_resistance / 1000.0);
  Serial.println(" KOhms");

  Serial.print("Approx. Altitude = ");
  Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
  Serial.println(" m");

  Serial.println();
  delay(2000);
  
}
