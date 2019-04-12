#ifndef TIMER_H_
#define TIMER_H_
// remove the libraries and namespace
#include <string>
using std::string;
using std::to_string;

class Timer {
private:
    int min;
    int sec;
public:
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
        if (min ==0 && sec == 0)
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
    }
    // replace string with String
    // replace to_string() with String()
    string get_time() {
        string out = "0000";
        string m = to_string(min);
        if (m.length() == 1)
            out[1] = m[0];
        else {
            out[0] = m[0];
            out[1] = m[1];
        }
        string s = to_string(sec);
        if (s.length() == 1)
            out[3] = s[0];
        else {
            out[2] = s[0];
            out[3] = s[1];
        }
        return out;
    }

};

#endif