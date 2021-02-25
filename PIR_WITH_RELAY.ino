  
int relay = 7;
int pir = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pir, INPUT);
pinMode(relay, OUTPUT);
}

void loop() {
  
  int value= digitalRead(pir);
  Serial.println(value);
  if (value== 1)
  {
    digitalWrite(relay , HIGH);
    Serial.print("door is open");
    delay(5000);
  }
  else 
  {
    digitalWrite(relay, LOW);
    Serial.print("door is closed");
    delay(5000);
  }
  
}
