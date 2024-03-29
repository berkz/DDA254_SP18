//Receives data over Serial port from Processing to control 2 LEDS
//Hook up LEDs to pins 4 and 8;


char val; // stores data received from serial port
int led1 = 4; // variable for which pin
int led2 = 8; // variable for which pin


void setup() {
  pinMode(led1, OUTPUT); // set pin as output
  pinMode(led2, OUTPUT); // set pin as output
  Serial.begin(9600); // Start serial communication at 9600 bps
}

void loop() {
  if (Serial.available()) { // If data is available to read
    val = Serial.read(); // read it and store it in val
  }
  if (val == '0') { // If 0 received
    digitalWrite(led1, LOW); // turn LEDs off
    digitalWrite(led2, LOW);
  }
  else if (val == '1') { // If 1 received
    digitalWrite(led1, HIGH); // turn the LED at pin 1 on
    digitalWrite(led2, LOW); // other LED off
  }
  else if (val == '2') { // If 2 received
    digitalWrite(led2, HIGH); // turn the LED at pin 2 on
    digitalWrite(led1, LOW); //other LED off
  }
  delay(10); // Wait 10 milliseconds
}

