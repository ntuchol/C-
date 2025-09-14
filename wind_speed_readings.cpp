#include <Arduino.h>

const int wind_speed_pin = 2; 
volatile unsigned long pulse_count = 0;
unsigned long last_measurement_time = 0;
const unsigned long measurement_interval = 1000; 

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
    noInterrupts();
    unsigned long current_pulse_count = pulse_count;
    pulse_count = 0;
    interrupts();

    float wind_speed = (float)current_pulse_count * (calibration_factor);

    Serial.print("Wind Speed: ");
    Serial.print(wind_speed);
    Serial.println(" m/s");

    last_measurement_time += measurement_interval;
  }
}
