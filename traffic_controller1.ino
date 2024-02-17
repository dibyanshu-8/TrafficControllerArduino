int red = 9; //constant variable named red and assigns it the value 9, indicating that digital pin 9 on the Arduino board will be used to control the red LED.
int yellow = 8;
int green = 7;

void setup(){
  
  pinMode(red, OUTPUT); //This line configures digital pin 9 (red) as an output pin, meaning it can send voltage (HIGH) or no voltage (LOW) to control the LED's on/off state.
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);
  
}
void loop(){
digitalWrite(red, HIGH);
 delay(15000);
digitalWrite(red,  LOW);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
digitalWrite(green, HIGH);
delay(20000);
digitalWrite(green,  LOW);
//  
digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow,  LOW);
delay(500);

  digitalWrite(yellow, HIGH);
delay(1000);  
  digitalWrite(yellow, LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  digitalWrite(yellow, HIGH);
delay(1000);
  digitalWrite(yellow, LOW);
delay(500);
  
  
}
