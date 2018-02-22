//Receives data over Serial port from Processing to control 1 LED fade
//Hook up LED to PWM pin 3.


byte val; // stores data received from serial port
int led = 3; // variable for which pin



void setup() {
  pinMode(led, OUTPUT); // set pin as output
  Serial.begin(9600); // Start serial communication at 9600 bps
}

void loop() {
  if (Serial.available()) { // If data is available to read
    val = Serial.read(); // read it and store it in val
  }
    analogWrite(led, val); 
  delay(10); // Wait 10 milliseconds
}

