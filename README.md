# Smart Garden

## Instalación de la Tarjeta de control Smart Garden

Para la instalación en Arduino IDE debemos seguir los siguientes pasos:

1. Abrir ARDUINO IDE
2. Debemos ir a la pestaña ***Archivo***->***Preferencias***.
	- En la pestaña ***Ajustes*** buscamos la opción: ***Gestor de URLs Adicionales de Tarjetas: ***
	- Pegamos la siguiente URL: `https://dl.espressif.com/dl/package_esp32_index.json`
	- Luego presionamos la opción ***OK*** y automáticamente se cerrará la ventana.
3. Debemos ir a la pestaña ***Herramientas***->***Placa***->***Gestor de tarjetas***.
	- Colocamos en la barra de búsqueda ***ESP32***.
	- Seleccionamos la opción que nos muestre ***ESP32 Wrover Module***.
	- Instalamos y luego presionamos la opción de ***Cerrar***.

Con esto tendremos completa la instalación de nuestra tarjeta ESP32 y lista para ser programada.	 

## Instalación USB Driver ***(Si no reconoce el puerto COM)***

En algunos casos nuestra PC no es capaz de reconocer el dispositivo USB que nosotros conectamos, es por ello que dejaremos un archivo para la instalación del driver con ello nuestra PC deberá ser capaz de reconocer el dispositivo conectado, en caso de que el problema persista asegúrese de que su dispositivo no se este sobre calentando.

[Descarga este driver para Windows][DRIVER_USB]

[DRIVER_USB]: https://www.arduined.eu/files/windows10/CH341SER.zip

1. Descomprimir el archivo ZIP descargado 
2. Seleccionar el archivo para instalación de Windows
	- SETUP.exe
3. Seleccionar CH341SER.INF
4. Click en la opción ***Install***
5. Cuando este instalado cerrar la ventana y listo.!

Con esto estaría lista la instalación del Driver USB para nuestra tarjeta en el Sistema Operativo Windows.

Puede seguir está guía para la instalación como una segunda opción 

[Sigue la guía para instalar el driver CH340][DRIVER_CH340]

[DRIVER_CH340]: https://www.arduined.eu/ch340-windows-10-driver-download/

## Pinout

### Alimentación de la tarjeta de control
Nombre | GPIO 
--- | --- 
VDD | 5V - 9V
VSS | GND

### Bomba de Agua No.1
Nombre | GPIO 
--- | --- 
AIN1 | 32
AIN2 | 33

### Bomba de Agua No.2
Nombre | GPIO 
--- | --- 
BIN1 | 25
BIN2 | 26

### Luz UV (Ultravioleta)
Nombre | GPIO 
--- | --- 
VDD | 5V
VSS | GND

### Higrómetro (Humedad de Suelo)
Nombre | GPIO 
--- | --- 
DATA | 19
VDD | 3V3 - 5V
VSS | GND

### I2C Connector STEMMA

Nombre | GPIO 
--- | --- 
SCL | 22
SDI | 21
VDD | 3V3
VSS | GND

### Prueba Motores

Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book

[Visita el código base en el siguiente link][prueba_motore]

[prueba_motore]: https://www.arduined.eu/files/windows10/CH341SER.zip

### Prueba sensor IR

Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book

[Visita el código base en el siguiente link][prueba_IR]

[prueba_IR]: https://www.arduined.eu/files/windows10/CH341SER.zip

### Control Remote desde Dabble

Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book 

[Visita el código base en el siguiente link][cotrol_dabble]

[control_dabble]: https://www.arduined.eu/files/windows10/CH341SER.zip
