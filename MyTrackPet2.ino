int ledPin = 6; // LED connected to digital pin 6
int inPin = 5;   // pressure sensor connected to digital pin 7
int val = 150;     // variable to store the read value
int s = LOW;

void setup()
{
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);      // sets the digital pin 6 as output
  pinMode(inPin, INPUT);      // sets the digital pin 5 as input
}

void loop()
{
  val = analogRead(inPin);   // read the input pin
if (val<150) {
  s=HIGH;
} else {
  s=LOW;
}
  digitalWrite(ledPin, s);    // sets the LED to the button's value
  Serial.println(val);
}
