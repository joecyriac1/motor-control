const int ENA = 9;    //speed 
const int IN1 = 8;    // Motor input 1
const int IN2 = 7;    // Motor input 2
const int POT = A0;   // Potentiometer 
const int BUTTON = 2; // Button 

bool direction = true;       // true -> forward, false -> reverse
int lastButtonState = HIGH;  

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP); 
  Serial.begin(9600);            
}

void loop() {
  
  int potValue = analogRead(POT);                  
  int speedPWM = map(potValue, 0, 1023, 0, 255);     
  analogWrite(ENA, speedPWM);                     

  
  int buttonState = digitalRead(BUTTON);             // HIGH or LOW
  if (buttonState == LOW && lastButtonState == HIGH) 
  {
    direction = !direction;  // toggle direction
    delay(200);              
  }
  lastButtonState = buttonState;

  
  if (direction) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  } else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  }

 
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print("  PWM: ");
  Serial.print(speedPWM);
  Serial.print("  Direction: ");
  Serial.println(direction ? "Forward" : "Reverse");

  delay(50);
}  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
