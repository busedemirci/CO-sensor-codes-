
const int AOUTpin=0;
const int DOUTpin=8;
const int ledPin=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(DOUTpin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

double value= analogRead(AOUTpin);
int limit= digitalRead(DOUTpin);
Serial.print("CO value: ");

Serial.println(value);

Serial.print("Limit: ");
Serial.print(limit);

  if(digitalRead(12)>30)
  {
    Serial.println("co iyi");
    limit=HIGH;
  }
  else
  {
    Serial.println("co kotu");
     limit=LOW;
  }

  delay(200);
  if (limit == HIGH){
digitalWrite(ledPin, HIGH);
}
else{
digitalWrite(ledPin, LOW);
}
}
