/*

*/

class Timer {
  private:
    int minute;
    int sec;
  public:
    Timer(int m, int s) {
      minute = m;
      sec = s;
    }

    void set_time(int m, int s) {
      minute = m;
      sec = s;
    }

    void reset_time() {
      minute = 0;
      sec = 0;
    }

    bool finished() {
      if (minute == 0 && sec == 0)
        return true;
      else
        return false;
    }

    void up() {
      if (minute == 99 && sec == 60)
        return;
      sec ++;
      if (sec > 59) {
        sec = 0;
        minute++;
      }
    }

    void down() {
      if (minute == 0 && sec == 0)
        return;
      sec--;
      if (sec < 0) {
        sec = 59;
        minute--;
      }
    }

    String get_time() {
      String out = "0000";
      String m = String(minute);
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

void setup() {

}

Timer t1 = Timer(0, 10);

void loop() {
  Serial.println(t1.get_time());
  while (!t1.finished()) {
    t1.down();
    Serial.println(t1.get_time());
    delay(1000);
  }
}
