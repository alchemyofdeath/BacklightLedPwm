int ledPin = 4;
int adcPin = 3;
int adc_value;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  adc_value = analogRead( adcPin ); // read 10 bit adc value from I/O pin 3
  analogWrite( ledPin ,( int )( ( ( long ) adc_value * 255L ) / 1024L ) ); // convert 10 bit to 8 bit, write to PWM 
}
