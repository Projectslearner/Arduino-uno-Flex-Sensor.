# Arduino Uno Flex Sensor

#### Project Overview

This project demonstrates how to use a flex sensor with an Arduino Uno to measure the bending of the sensor. The sensor's resistance changes with bending, which is read as an analog input by the Arduino. The measured value is then displayed on the serial monitor.

#### Components Needed

- **Arduino Uno**
- **Flex Sensor**
- **10kΩ Resistor**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the Flex Sensor to Arduino Uno:**
   - **One end of the Flex Sensor:** Connect to 5V on the Arduino Uno.
   - **Other end of the Flex Sensor:** Connect to one end of a 10kΩ resistor and to analog pin A0 on the Arduino Uno.
   - **Other end of the 10kΩ resistor:** Connect to GND on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the flex sensor and resistor to the Arduino Uno as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Bend the flex sensor and observe the serial monitor output displaying the sensor values, which should change with the bending.

#### Applications

- **Wearable Technology:** Use for detecting body movements or gestures.
- **Robotics:** Implement in projects where sensor feedback on limb or joint positions is necessary.
- **Prototyping:** Useful for testing flexible sensor inputs in various projects.

#### Notes

- Ensure the flex sensor is correctly connected to the Arduino Uno and powered.
- The resistance of the flex sensor increases with bending, resulting in a lower voltage reading on the analog pin.
- Adjust the code if necessary to map sensor values to specific ranges based on your application.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-flex-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner