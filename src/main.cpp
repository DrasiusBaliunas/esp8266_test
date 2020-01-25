#include <Arduino.h>

// Globals
#define LED_ON LOW
#define LED_OFF HIGH
#define LED_DELAY 1000
#define SERIAL_SPEED 115200

// Function prototypes
void showLed(int pin, int delayPeriod, bool ledStatus);

// Setup
void setup()
{
  Serial.begin(SERIAL_SPEED);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Start");
}

// Main loop
void loop()
{
  showLed(LED_BUILTIN, LED_DELAY, 1);
  showLed(LED_BUILTIN, LED_DELAY, 0);
}

// Functions
void showLed(int pin, int delayPeriod, bool ledStatus)
{
  Serial.println(ledStatus ? "Led is ON" : "Led is OFF");
  digitalWrite(pin, ledStatus ? LED_ON : LED_OFF);
  delay(delayPeriod);
}