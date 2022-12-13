
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  Serial.print("LED ON\n");
  delay(4000);                      
  digitalWrite(LED_BUILTIN, LOW);    
  Serial.print("LED OFF\n");
  delay(4000);                       
}
