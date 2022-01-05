// Intended for ESP32 -> Node32S
// Upload Speed 460800
// Flash Frequency 40MHZ
// Press Boot to start

void setup() {
  pinMode(27, OUTPUT);
  digitalWrite(27, LOW); //LED off

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(27, HIGH); delay(1000);
  digitalWrite(27, LOW); delay(1000);
}
