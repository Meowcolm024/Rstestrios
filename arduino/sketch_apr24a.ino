/*******************************************************************************
  Software Author:  HQ
  Creation Date:        2015-2-10
  Software History: 2015-3-20
  Version:              2.0
  Sales address：       http://qifeidz.taobao.com/
********************************************************************************/

unsigned char LED_0F[] =
{ // 0  1    2    3  4  5    6    7  8  9    A    b  C    d    E    F    -
  0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90, 0x8C, 0xBF, 0xC6, 0xA1, 0x86, 0xFF, 0xbf
};
unsigned char LED[4]; //用于LED的4位显示缓存
int SCLK = 2;
int RCLK = 1;
int DIO = 0; //这里定义了那三个脚
int LEDD = 10;

class Timer {
  private:

  public:
	int min;
	int sec;
	Timer(int m, int s) {
	  min = m;
	  sec = s;
	}

	void set_time(int m, int s) {
	  min = m;
	  sec = s;
	}

	void reset_time() {
	  min = 0;
	  sec = 0;
	}

	bool finished() {
	  if (min == 0 && sec == 0)
		return true;
	  else
		return false;
	}

	void up() {
	  if (min == 99 && sec == 60)
		return;
	  sec ++;
	  if (sec > 59) {
		sec = 0;
		min++;
	  }
	}

	void down() {
	  if (min == 0 && sec == 0)
		return;
	  sec--;
	  if (sec < 0) {
		sec = 59;
		min--;
	  }
	  //delay(1000);
	}
	// replace string with String
	// replace to_string() with String()
	String get_time() {
	  String out = "0000";
	  String m = String(min);
	  if (m.length() == 1)
		out[1] = m[0];
	  else {
		out[0] = m[0];
		out[1] = m[1];
	  }
	  String s = String(sec);
	  if (s.length() == 1)
		out[3] = s[0];
	  else {
		out[2] = s[0];
		out[3] = s[1];
	  }
	  return out;
	}

};

void setup ()
{
  pinMode(SCLK, OUTPUT);
  pinMode(RCLK, OUTPUT);
  pinMode(DIO, OUTPUT); //让三个脚都是输出状态
  pinMode(LEDD, OUTPUT);
 
}

Timer t1 = Timer(0, 50);

void loop()
{

  int s1 = t1.sec % 10;
  int s2 = t1.sec/10;
  int m1 = t1.min % 10;
  int m2 = t1.min / 10;
  LED[0] = s1; 
  LED[1] = s2;
  LED[2] = m1;
  LED[3] = m2;
  if (t1.finished())
  digitalWrite(LEDD,HIGH);
  for (int i =0; i <1350; i++){
	LED4_Display();
	
  }
  t1.down();
  digitalWrite(LEDD,LOW);
}

void outputLED(char i, char j, char k, char l) {
  LED[0] = i;
  LED[1] = j;
  LED[2] = k;
  LED[3] = l;
}

void LED4_Display (void)
{
  unsigned char *led_table;          // 查表指针
  unsigned char i;
  //显示第1位
  led_table = LED_0F + LED[0];
  i = *led_table;
  LED_OUT(i);
  LED_OUT(0x01);
  digitalWrite(RCLK, LOW);
  digitalWrite(RCLK, HIGH);
  //显示第2位
  led_table = LED_0F + LED[1];
  i = *led_table;
  LED_OUT(i);
  LED_OUT(0x02);
  digitalWrite(RCLK, LOW);
  digitalWrite(RCLK, HIGH);
  //显示第3位
  led_table = LED_0F + LED[2];
  i = *led_table;
  LED_OUT(i);
  LED_OUT(0x04);
  digitalWrite(RCLK, LOW);
  digitalWrite(RCLK, HIGH);
  //显示第4位
  led_table = LED_0F + LED[3];
  i = *led_table;
  LED_OUT(i);
  LED_OUT(0x08);
  digitalWrite(RCLK, LOW);
  digitalWrite(RCLK, HIGH);
}

void LED_OUT(unsigned char X)
{
  unsigned char i;
  for (i = 8; i >= 1; i--)
  {
	if (X & 0x80)
	{
	  digitalWrite(DIO, HIGH);
	}
	else
	{
	  digitalWrite(DIO, LOW);
	}
	X <<= 1;
	digitalWrite(SCLK, LOW);
	digitalWrite(SCLK, HIGH);
  }
}