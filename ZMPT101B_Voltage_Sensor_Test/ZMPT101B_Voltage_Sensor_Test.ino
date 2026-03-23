#include <ZMPT101B.h> 

#define SENSOR_PIN 34 
#define VOLTAGE 230.0 

ZMPT101B voltageSensor(SENSOR_PIN); 

void setup() { 
  Serial.begin(115200); 
  voltageSensor.setSensitivity(1000.0); 
} 

void loop() { 
  float voltage = voltageSensor.getRmsVoltage(); 
  
  if (voltage < 200) { 
    voltage = 0; 
  }  
  
  Serial.print("Voltage: "); 
  Serial.println(voltage); 
  delay(1000); 
}