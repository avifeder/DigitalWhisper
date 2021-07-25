double calcPassTime()
{
  double sum = 0;
  for(int i = 0 ; i < 5 ; i++)
  {
    int t1 = millis();
    enterPass(passToCheck);      
    while (digitalRead(redLed) != HIGH && digitalRead(greenLed) != HIGH);
    if(digitalRead(greenLed) == HIGH)
        break;
    int t2 = millis();
    sum += (t2 - t1);
  }
  return sum/5;
}