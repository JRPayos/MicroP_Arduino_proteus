
const int LED[] = {13,12,11,10,9,8,7,6,5,4};
int delays;

void setup()
{
  for (int i=0; i<11; i++)
  {
  	pinMode(LED[i], OUTPUT);
  }
  pinMode(A0, INPUT);
}

void loop()
{	
  delays = analogRead(A0);
  for (int i=0; i<10; i++){
    digitalWrite(LED[i], HIGH);
  	delay(delays);
  	digitalWrite(LED[i], LOW);
  }
 
}
