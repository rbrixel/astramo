/*
 * [ASTRAMO] - V0.1
 * René Brixel
 * 
 * Settings for microcontroller
 * ----------------------------
 * Board: ATtiny25/45/85
 * Processor: ATtiny85
 * Clock: Internal 1 MHz
 * Board-Lib: https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
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

  attachInterrupt(pinIr, TracerFire, FALLING); // goto if voltage is falling and and bb passthrough light barrier
  //attachInterrupt(digitalPinToInterrupt(pinIr), TracerFire, FALLING); // goto if voltage is falling
}

void loop() {
  // TODO
}

void TracerFire() {
  // TODO
}
