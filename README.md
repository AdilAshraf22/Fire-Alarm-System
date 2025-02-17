# Fire Alarm System

# 📖 Overview

This system detects high temperatures and gas leaks and triggers an alarm using a buzzer and LED indicator. It is useful for fire safety and gas leak prevention.

# 🚀 Features

• Temperature monitoring using TMP36 sensor.

• Gas detection using an analog gas sensor.

• Alerts via buzzer and LED indicators.

• Can be used in homes, industries, and buildings.

# 🛠 Hardware Components

• Arduino Uno (Microcontroller)

• TMP36 Temperature Sensor (Monitors temperature levels)

• Piezo Buzzer (Alarm system)

• Green LED (Indicates fire or gas detection)

• 100-ohm Resistor (For LED protection)

• Wires & Breadboard

# 🖥 Software Requirements

• Arduino IDE (For code compilation and upload)

• C++ (Arduino Programming Language)

# 🏗 How It Works

• TMP36 Sensor reads temperature data and sends it to Arduino.

• Gas sensor (or substitute) detects dangerous gas levels.

• If temperature >= 80°C, the LED turns on.

If gas levels are above threshold, the buzzer sounds an alarm.

Data is displayed via Serial Monitor for real-time updates.

# 🏗 How to Run

1. Clone this repository:
   ```sh
   git clone https://github.com/your-username/fire-alarm-system.git
   cd fire-alarm-system


2. Upload the code to an Arduino board using Arduino IDE:
   ```sh
   git clone https://github.com/your-username/fire-alarm-system.git
   cd fire-alarm-system


3. Monitor real-time performance:
   ```sh
   arduino-cli monitor -p /dev/ttyUSB0 -b 115200

# 👨‍💻 Contributing

Feel free to fork and improve each project. Open a pull request with any enhancements.

# 📜 License

Each project is open-source and available under the MIT License.






   
