
//Example of Arduino sending to Processing with data type char.


int sensorPin = 0; //sensor hooked up to analog pin 0
int val = 0;

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 bps
}

void loop() {
  val = analogRead(sensorPin); //read sensor and assign to variable called val
  delay(100); // Wait 100 milliseconds

  if (val < 200) {  
    Serial.write('a');  
  } else {
    Serial.write('b');
  }

 //change Serial.write() to Serial.println() for checking monitor
}
