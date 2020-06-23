int i=0;//此代码无法运行
int j=0;
int k=0;
 
void setup()
{
  for(i=2;i<=9;i++)
  {
    pinMode(i,OUTPUT);
  }
  for(i=2;i<=9;i++)
  {
    digitalWrite(i,HIGH);
  }
}
 
void loop()
{
  int num[10][7]={
    {2,3,4,5,6,7},
    {3,4},
    {2,3,5,6,8},
    {2,3,4,5,8},
    {3,4,7,8},
    {2,4,5,7,8},
    {5,6,7,8},
    {2,3,4},
    {2,3,4,5,6,7,8},
    {2,3,4,7,8}
  };
  for(i=0;i<10;i++)
  {
    for(j=0;j<7;j++)
    {
      digitalWrite(num[i][j],LOW); 
      digitalWrite(num[i][j],HIGH);
      delay(1000);
    }
  }
}     
