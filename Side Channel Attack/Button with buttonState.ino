const int  buttonPin = 12;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to


// Variables will change:
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);

}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState && buttonState == HIGH ) {
    // if the state has changed, changed the led mode
    if (digitalRead(ledPin) == LOW) {
      // if the current state is LOW then the button went from off to on:
	  digitalWrite(ledPin, HIGH);
    } else {
	  // if the current state is HIGH then the button went from on to off:
	  digitalWrite(ledPin, LOW);
    }
	
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
  
}
