

void setup() {
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensor1 = analogRead(A0);
  // read the input on analog pin 1:
  int sensor2 = analogRead(A1);
  // read the input on analog pin 2:
  int sensor3 = analogRead(A2);
  // read the input on analog pin 3:
  int sensor4 = analogRead(A3);

  
  // print out the value you read:
  Serial.print("A0 ");
  Serial.println(sensor1);
  Serial.print("A1 ");
  Serial.println(sensor2);
  Serial.print("A2 ");
  Serial.println(sensor3);
  Serial.print("A3 ");
  Serial.println(sensor4);
  Serial.println("");
  Serial.println("");

  
  delay(20);        // delay in between reads for stability
}
