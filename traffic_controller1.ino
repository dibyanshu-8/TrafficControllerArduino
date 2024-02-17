int red = 11; //constant variable named red and assigns it the value 11, indicating that digital pin 11 on the Arduino board will be used to control the red LED.
int yellow = 12;
int green = 13;

void setup(){
  
  pinMode(red, OUTPUT); //This line configures digital pin 11 (red) as an output pin, meaning it can send voltage (HIGH) or no voltage (LOW) to control the LED's on/off state.
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);
  
}
void loop(){
digitalWrite(red, HIGH); //Turns on the red LED by setting pin 11 to HIGH (5 volts).
 delay(15000); // Waits for 15 seconds using the delay() function.
digitalWrite(red,  LOW); //Turns off the red LED by setting pin 11 to LOW (0 volts).

  //This block of code (turning on yellow for 1 second, off for 0.5 second) is repeated five times, resulting in a 5-second flashing yellow sequence.
  digitalWrite(yellow, HIGH);
delay(1000); //Waits for 1 second.
  digitalWrite(yellow,  LOW);
delay(500); //Waits for 0.5 seconds.

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
delay(20000); //Waits for 20 seconds (longer green duration).
digitalWrite(green,  LOW);

//The yellow flashing sequence is repeated again.
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
