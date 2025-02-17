float temp;
float vout;
float vout1;
int LED = 13;
int gasSensor;
int piezo = 7;
int gasThreshold = 500; // Adjust this value based on your gas sensor

void setup() {
    pinMode(A0, INPUT); // Gas Sensor
    pinMode(A1, INPUT); // Temperature Sensor
    pinMode(LED, OUTPUT);
    pinMode(piezo, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // Read temperature sensor
    vout = analogRead(A1);
    vout1 = (vout / 1023.0) * 5000;  // Convert ADC value to millivolts
    temp = (vout1 - 500) / 10.0;  // Convert millivolts to Celsius

    // Read gas sensor
    gasSensor = analogRead(A0);

    // Error handling for sensor readings
    if (vout < 0 || vout > 1023) {
        Serial.println("Error: Invalid temperature sensor reading!");
        return;
    }
    if (gasSensor < 0 || gasSensor > 1023) {
        Serial.println("Error: Invalid gas sensor reading!");
        return;
    }

    // Fire alert based on temperature and gas sensor
    if (temp >= 80 || gasSensor > gasThreshold) {
        digitalWrite(LED, HIGH);
        tone(piezo, 1000, 500); // Play a 1000Hz tone for 500ms
        Serial.println("FIRE ALERT!");
        Serial.print("Temperature: ");
        Serial.print(temp);
        Serial.print(" C, Gas Sensor: ");
        Serial.println(gasSensor);
    } else {
        digitalWrite(LED, LOW);
        noTone(piezo); // Stop the piezo tone if the condition is no longer met.
        Serial.print("Temperature: ");
        Serial.print(temp);
        Serial.print(" C, Gas Sensor: ");
        Serial.println(gasSensor);
    }

    delay(1000); // Optional delay for stability
}
