#ifndef COUNTER_H_
#define COUNTER_H_

#include <iostream>

class Counter {
private:
    char time[4];
public:
    Counter() {
       for (int i =0; i < 4; i++)
        time[i] = 0;
    }

    void add() {
        if (time[3] < 9) 
            time[3] ++;
        else {
            time[3] = 0;
            time[2] ++;
        }
        if (time[2] > 6) {
            time[2] = 0;
            time[1] ++;
        }
        if (time[1] < 9) 
            time[1] ++;
        else {
            time[1] = 0;
            time[0] ++;
        }
        if (time[0] == 9)
            return;
    }

    void showtime() {
        std::cout << time[0] << time[1] << time[2] << time[3] <<std::endl;
    }
};

int main() {
    Counter c1 = Counter();
    c1.showtime();
}

#endif