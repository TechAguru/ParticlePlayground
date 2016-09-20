///// Deep sleep mode test.
// Key feature for deepsleep is,
//1. Enabling SRAM retain.
//2, assign retaining variable as "retained int variable = XX;"
//3. Then sleep the system.
//  STARTUP(System.enableFeature(FEATURE_RETAINED_MEMORY));
//  retained int sleepcount = 0;
//  System.sleep(SLEEP_MODE_DEEP,10);




STARTUP(System.enableFeature(FEATURE_RETAINED_MEMORY));

int setupMillis;
bool boolHasSlept=0;
// int sleepcount = 0;
retained int sleepcount = 0;



void setup() {
  pinMode(D7, OUTPUT);
  setupMillis = millis();
  Serial.begin(9600);
}

void loop() {
    if (sleepcount > 0){
        Serial.print("Good morning");
        Serial.print("I have slept   ");
        Serial.print(sleepcount);
        Serial.println("  times");
    }
  Serial.print("Current Time: ");
  Serial.println(millis());
  Serial.println(WiFi.localIP());
  Serial.print(Time.timeStr());

  if (millis() - setupMillis > 30000 and boolHasSlept==0) {
    sleepcount = sleepcount + 1;
    Serial.println("Deeply sleeping for 10s...");
    boolHasSlept=1;
    System.sleep(SLEEP_MODE_DEEP,10);
  }
  digitalWrite(D7, HIGH);
  delay(50);
  digitalWrite(D7, LOW);
  delay(500);
  digitalWrite(D7, HIGH);
  delay(100);
  digitalWrite(D7, LOW);
  delay(1000);
}
