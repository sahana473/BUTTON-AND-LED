/* Interfacing the buttons to Ardunio Uno.
 * Demonstrating to count the n time LED blinks and display in Serial monitor when n time button is pressed 
 * 
 * Hardware Component:
 * Arduino Uno
 * Buttons
 * LED
 *  
 * Hardware Connection:- 
 * D3 of Arduino Uno is connected to Switch/Button pin to count the number of time button is pressed
 * D2 of Arduino Uno is connected to Button pin to start blinking process
 * D13 of Arduino Uno is connected to Led
 *      
 * Author : Sahana B G
 * Date   : 30 Apr 2021
 *  
 */
 
// Pin configuration
const unsigned char SWITCHPIN = 3;      
const unsigned char BUTTONPIN = 2;     
const unsigned char LEDPIN = 13;  

// Variable to store button count        
static char buttonCount;         
 
void setup() 
{ 
  // BaudRate for serial monitor 
  Serial.begin(9600);     

  // Configuring I/O pins
  pinMode(BUTTONPIN, INPUT);         
  pinMode(SWITCHPIN, INPUT); 
  pinMode(LEDPIN, OUTPUT); 
  digitalWrite(BUTTONPIN, HIGH);      // Set pullup resistor
            
}

// Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
// HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
// button's pressed, and off when it's not:

void loop()
{
  // Initial condition for LED  
  digitalWrite(LEDPIN, LOW); 
  
  if (digitalRead(BUTTONPIN) == LOW)  // check if button was pressed
  {
   while (digitalRead(BUTTONPIN) == LOW);
    buttonCount++;                  
    delay(250);                       // add delay for debouncing 
  }

  // Displaying Button value in serial terminal
  Serial.print ("Button press count = ");         
  Serial.println(buttonCount, DEC);  // displays button count in decimal

  if(digitalRead(SWITCHPIN) == LOW) // check if switch was pressed
  {
    for (byte n = 1; n <= buttonCount; n++)    
     {
      digitalWrite(LEDPIN, HIGH);      
      delay(500);                      
      digitalWrite(LEDPIN, LOW);       
      delay(500);                     
    }
    buttonCount = 0; // Reset count for next iteration
  }   
}
