// Intended for ESP32 -> Node32S
// Upload Speed 460800
// Flash Frequency 40MHZ
// Press Boot to start

byte RGB_BLUE = 0;
byte RGB_GREEN = 2;
byte RGB_RED = 4;

void setup() {
  pinMode(RGB_BLUE, OUTPUT);
  pinMode(RGB_GREEN, OUTPUT);
  pinMode(RGB_RED, OUTPUT);

  digitalWrite(RGB_BLUE, HIGH); //Off
  digitalWrite(RGB_GREEN, HIGH); //Off
  digitalWrite(RGB_RED, HIGH); //Off
  delay(1000);
}

void loop() {
  digitalWrite(RGB_BLUE, LOW); delay(100);
  digitalWrite(RGB_BLUE, HIGH); delay(1000);

  digitalWrite(RGB_GREEN, LOW); delay(100);
  digitalWrite(RGB_GREEN, HIGH); delay(1000);

  digitalWrite(RGB_RED, LOW); delay(100);
  digitalWrite(RGB_RED, HIGH); delay(1000);

}
