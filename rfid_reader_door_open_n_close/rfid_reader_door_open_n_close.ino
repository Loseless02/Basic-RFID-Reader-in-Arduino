#include <Servo.h>                //Adding our servo library

int sensorPin = 8;                //The pin to attach the sensor to
int servoPin = 9;                 //The pin to connect the servo
int movement;                     //Data from the sensor
int greenLight = 2;
int redLight = 3;
Servo motor;                      //Servomotor variable


void setup() {
  motor.attach(servoPin);         //Connect the servo to pin 9
  pinMode(sensorPin, INPUT);         //Set the sensor pin as input

}

void loop() {
  movement = digitalRead(sensorPin);  //Reading from the sensor
  
  if(movement == LOW){                           //If there is no movement, the commands inside are applied
    pinMode(redLight, HIGH); 
  }

  if(movement != HIGH){            //If there is movement, the commands inside are applied
    pinMode(greenLight, HIGH);
    if(movement != HIGH){                           //If there is no movement, the commands inside are applied
      pinMode(redLight, HIGH); 
  }
  }
  if(movement != HIGH){                           //If there is no movement, the commands inside are applied
    pinMode(redLight, HIGH); 
  }
}


