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
  adc_value = analogRead( adcPin );
  analogWrite( ledPin ,( int )( ( ( long ) adc_value * 255L ) / 1024L ) );
}
