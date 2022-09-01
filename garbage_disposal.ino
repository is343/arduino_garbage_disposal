// WEMOS D1 MINI

/*
 * Triggers the relay after a defined timeout
 */

const int relayPin = D1;
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);  // initialize onboard LED as output
  pinMode(relayPin, OUTPUT);
  digitalWrite(BUILTIN_LED, LOW);  // the onboard LED is activated on LOW
}

bool done = false;

void loop() {
  if (!done){
    done = true;
    // wait 30 seconds
    delay(30000);
    digitalWrite(relayPin, HIGH);  // trigger the relay with voltage HIGH
    digitalWrite(BUILTIN_LED, HIGH);  // turn off onboard LED
  }
}
