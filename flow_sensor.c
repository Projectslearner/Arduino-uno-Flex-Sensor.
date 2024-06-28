/*
    Project name : Arduino Uno Flex Sensor
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-flex-sensor
*/

const int flexSensorPin = A0; // Analog pin connected to the flex sensor
int sensorValue = 0;          // Variable to store the sensor value

void setup() 
{
  // Initialize serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  // Read the analog input from the flex sensor
  sensorValue = analogRead(flexSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Flex Sensor Value: ");
  Serial.println(sensorValue);

  // Wait for a short period before taking another reading
  delay(100);
}
