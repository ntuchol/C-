// Example for pulse-counting anemometer (Arduino-style)
#include <Arduino.h>

const int wind_speed_pin = 2; // Interrupt pin for wind speed
volatile unsigned long pulse_count = 0;
unsigned long last_measurement_time = 0;
const unsigned long measurement_interval = 1000; // Measure every 1 second

void wind_speed_interrupt() {
  pulse_count++;
}

void setup() {
  Serial.begin(9600);
  pinMode(wind_speed_pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(wind_speed_pin), wind_speed_interrupt, RISING);
  last_measurement_time = millis();
}

void loop() {
  if (millis() - last_measurement_time >= measurement_interval) {
    // Disable interrupts temporarily to read pulse_count
    noInterrupts();
    unsigned long current_pulse_count = pulse_count;
    pulse_count = 0;
    interrupts();

    // Convert pulse count to wind speed (adjust formula based on your anemometer's specifications)
    // For example, if 2 pulses per revolution and 1 revolution = X m/s
    float wind_speed = (float)current_pulse_count * (calibration_factor);

    Serial.print("Wind Speed: ");
    Serial.print(wind_speed);
    Serial.println(" m/s");

    last_measurement_time += measurement_interval;
  }
}