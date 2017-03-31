void setup()
{
  pinMode( 5 , INPUT);
  pinMode( 6 , INPUT);
  pinMode( 7 , INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Pin 5:");
  Serial.print(digitalRead(5));
  Serial.println();
  Serial.print("Pin 6:");
  Serial.print(digitalRead(6));
  Serial.println();
  Serial.print("Pin 7:");
  Serial.print(digitalRead(7));
  Serial.println();
  if (( ( digitalRead(5) ) == ( LOW ) ))
  {
    tone(8, 523.25, 200);
  }
  if (( ( digitalRead(6) ) == ( LOW ) ))
  {
    tone(8, 659.25, 200);
  }
  if (( ( digitalRead(7) ) == ( LOW ) ))
  {
    tone(8, 783.99, 200);
  }
  if (( ( ( digitalRead(5) ) == ( LOW ) ) && ( ( digitalRead(7) ) == ( LOW ) ) ))
  {
    tone(8, 587, 200);
  }
  if (( ( ( digitalRead(6) ) == ( LOW ) ) && ( ( digitalRead(7) ) == ( LOW ) ) ))
  {
    tone(8, 698, 200);
  }
  if (( ( ( digitalRead(5) ) == ( LOW ) ) && ( ( digitalRead(7) ) == ( LOW ) ) ))
  {
    tone(8, 880, 200);
  }
  if (( ( ( digitalRead(5) ) == ( LOW ) ) && ( ( ( digitalRead(6) ) == ( LOW ) ) && ( ( digitalRead(7) ) == ( LOW ) ) ) ))
  {
    tone(8, 987, 200);
  }
}


