void checkPass()
{
   delay(random(50,200));
   for(int i = 0; i<5; i++)
   {    
    if(pressHistory[i]!=code[i])
    {
       counter = 0;
       digitalWrite(redLedPin, HIGH);
       return;
    }
    delay(100);
   }
   digitalWrite(greenLedPin, HIGH);
   counter = 0;
}
