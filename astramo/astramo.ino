/*
 * [ASTRAMO]
 * René Brixel
 * V0.1 - 2022-01-11
 */

int pinVin = 3; // Measure lipo-voltage-level over voltage divider

int ledModus = 4; // Status LED after power on
//int pinModus = 3; // Set power-output mode

int ledIr = 1; // Sending IR-Signals
int pinIr = 2; // Reads the IR-Signals

int ledTracer = 0; // Driver-Stage for Tracer-LEDs

void setup() {
  pinMode(pinVin, INPUT);
  //pinMode(pinModus, INPUT);
  //pinMode(pinIr, INPUT);
  pinMode(pinIr, INPUT_PULLUP);
  
  pinMode(ledModus, OUTPUT);
  pinMode(ledIr, OUTPUT);
  pinMode(ledTracer, OUTPUT);

  attachInterrupt(pinIr, TracerFire, FALLING); // goto if voltage is falling
  //attachInterrupt(digitalPinToInterrupt(pinIr), TracerFire, FALLING); // goto if voltage is falling
}

void loop() {
}

void TracerFire() {
  
}
