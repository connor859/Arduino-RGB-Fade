int red = 9;
 int green = 10;
 int blue = 11;
void setup() {
 pinMode(red, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(blue, OUTPUT);

}

void loop() {
  for(int i = 0; i <= 255; i++)
  {
analogWrite(red, i * i / 255);
analogWrite(blue, i / 2);
analogWrite(green, 255 - i);
 delay(10);
  }
  for(int i = 255; i >= 0; i--)
  {
analogWrite(red, i * i / 255);
analogWrite(blue, i / 2);
analogWrite(green, 255 - i);
 delay(10);
  }





  
}
