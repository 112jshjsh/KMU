#define PIN_LED 7
int t = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  
  digitalWrite(PIN_LED, 0);
  delay(1000);
  
  while (t <= 5) {
    digitalWrite(PIN_LED, 0);
    delay(200);
    digitalWrite(PIN_LED, 1);
    delay(200);
    t+=1;
  }

  while (1){
    delay(1000); 
    } // infinite loop
}
