// WEMOS D1 MINI

/*
 * Blink
 * Turns on the onboard LED on for one second, then off for one second, repeatedly.
 * This uses delay() to pause between LED toggles.
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
  }
}
