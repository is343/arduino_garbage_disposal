// WEMOS D1 MINI

/*
 * Triggers the relay after a defined timeout
 */

const int relayPin = D1;
const int powerIndicatorPin = D2;
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);  // initialize onboard LED as output
  pinMode(relayPin, OUTPUT);
  pinMode(powerIndicatorPin, OUTPUT);
  digitalWrite(BUILTIN_LED, LOW);  // the onboard LED is activated on LOW
  digitalWrite(powerIndicatorPin, HIGH); // let us know that it is on
}

bool done = false;

void loop() {
  if (!done){
    done = true;
    // wait 30 seconds
    delay(30000);
    digitalWrite(relayPin, HIGH);  // trigger the relay with voltage HIGH
    digitalWrite(powerIndicatorPin, LOW); // trigger that it is now safe
  }
}
