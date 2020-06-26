/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a
  range from 0 to 255  and uses the result to set
  the pulsewidth modulation (PWM) of an output
  pin.  Also prints the results to the serial
  monitor.

  The circuit:
  * potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the
    analog pin. side pins of the potentiometer go
    to +5V and ground
  * LED connected from digital pin 9 to ground

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.
*/

int sensorValue = 0; //从pot读取的值

int outputValue = 0; //输出到脉宽调制的值（模拟输出）

void setup()
{
  pinMode(A0, INPUT); //设置A0为输入
  pinMode(9, OUTPUT); //设置9为输出
  Serial.begin(9600); //以9600波特率初始化串口通讯

}

void loop()
{
  // read the analog in value:
  sensorValue = analogRead(A0);//读取A0引脚模拟输入的电压值
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);//将模拟读取范围由0到1023映射到0到255
  // change the analog out value:
  analogWrite(9, outputValue);//改变模拟输出值
  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);//在串口打印出sensorValue的值
  Serial.print("\t output = ");
  Serial.println(outputValue);//在串口打印出outputValue的值
  // wait 2 milliseconds before the next loop for the
  // analog-to-digital converter to settle after the
  // last reading:
  delay(2); // Wait for 2 millisecond(s)
}