/*
Example of sending data from Processing to Arduino over Serial. 
Data received by Arduino controls 1 LED fade.
***Be sure to specify your correct port number***
*/


byte val=0;

import processing.serial.*;  //import Serial library

Serial myPort;  // create object from Serial class

void setup() {
  size(500, 500); 
  background (255);
  fill(0);
  textSize (22);
  textAlign (CENTER, CENTER);

  //set up Serial communication
  printArray(Serial.list()); // prints port list to the console
  String portName = Serial.list()[1]; //change to match your port
  myPort = new Serial(this, portName, 9600); //initialize Serial communication at 9600 baud
}

void draw() {
  //text stuff
  text ("dimmer", width/4, height/4);
  text ("brighter", width-width/4, height/4);

//mouse location controls communication to Serial 
   val= byte(mouseX/4);
    myPort.write(val); //send a 0
    println(val);
}