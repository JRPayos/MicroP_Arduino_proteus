//ACT 1.C
const int LED[] = {13,12,11,10,9,8,7};
const int nums[10][7] =
{
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}  //9
};
const int ButtonPin = 2;
int buttonState = 0;

void setup()
{
  
  for (int i=0; i<7; i++)
  {
  	pinMode(LED[i], OUTPUT);
  }
  pinMode(ButtonPin, INPUT);
}

void loop()
{	
  buttonState = digitalRead(ButtonPin);

  if (buttonState == LOW){
  for(int i=0; i<10; i++)
	{
  	number(i);           
  	delay(500);          
	}
  }
  else{
  for(int i=9; i>=0; i--)
	{
  	number(i);           
  	delay(500);         
	}  
  }
  
}

void number(int num)                       
{
  for(int i=0; i<8; i++)                   
  {
    digitalWrite(LED[i], nums[num][i]); 
  }
}