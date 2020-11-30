// Intended for ESP32 -> Node32S
// Upload Speed 460800
// Flash Frequency 40MHZ
// Press Boot to start

void setup() {
  pinMode(2, OUTPUT); // initialize digital pin BUILTIN LED as an output
  digitalWrite(2, HIGH);
}

void loop() {
  digitalWrite(2, HIGH); //turn LED off
  delay(1000);
  digitalWrite(2, LOW); //turn LED on
  delay(1000);
}
