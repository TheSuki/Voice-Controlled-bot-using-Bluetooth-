#include <AFMotor.h>                   //Ada fruit motor shield
AF_DCMotor motor(1,MOTOR12_8KHZ);  //Motor Initialization
AF_DCMotor motor1(2,MOTOR12_8KHZ);
const int Ps=A0;                    //Proximity sensor initialization
int input = 0;                    // Variable declaration
void setup()
 { 
motor.setSpeed(200);      //Setting motor speed to 200 RPM
motor1.setSpeed(200);       //Setting second motor speed to 200 RPM

  
  Serial.begin(9600);      
}


void loop() {

  
    if(digitalRead(Ps)==HIGH)      //Check the sensor output
  {
    digitalWrite(13, HIGH);
     Serial.println("no obstacles");     // Set the LED off, no obstacle is present so the bot can move forward
   
     motor1.run(FORWARD);               //Bot moves in forward direction
 motor.run(FORWARD);
  }
  else
  {
    digitalWrite(13, LOW);
     motor.run(RELEASE);                           //Making the bot stop 
 motor1.run(RELEASE);
     Serial.println("obstacles Ahead");                // Set the LED to switch on
  }
input = analogRead(Ps);

Serial.println(input);
delay(1000);           
  }#include <AFMotor.h>                   //Ada fruit motor shield
AF_DCMotor motor(1,MOTOR12_8KHZ);  //Motor Initialization
AF_DCMotor motor1(2,MOTOR12_8KHZ);
const int Ps=A0;                    //Proximity sensor initialization
int input = 0;                    // Variable declaration
void setup()
 { 
motor.setSpeed(200);      //Setting motor speed to 200 RPM
motor1.setSpeed(200);       //Setting second motor speed to 200 RPM

  
  Serial.begin(9600);      
}


void loop() {

  
    if(digitalRead(Ps)==HIGH)      //Check the sensor output
  {
    digitalWrite(13, HIGH);
     Serial.println("no obstacles");     // Set the LED off, no obstacle is present so the bot can move forward
   
     motor1.run(FORWARD);               //Bot moves in forward direction
 motor.run(FORWARD);
  }
  else
  {
    digitalWrite(13, LOW);
     motor.run(RELEASE);                           //Making the bot stop 
 motor1.run(RELEASE);
     Serial.println("obstacles Ahead");                // Set the LED to switch on
  }
input = analogRead(Ps);

Serial.println(input);
delay(1000);           
  }
