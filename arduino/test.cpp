#include <iostream>
#include <ctime>
#include "Timer.h"

using namespace std;

void delay(int sec) { 
    time_t start_time, cur_time;
    time(&start_time); 
    do { 
        time(&cur_time); 
    } while((cur_time - start_time) < sec ); 
} 

int main() {
    Timer t1 = Timer(0,10);
    cout << t1.get_time() << endl;
    while (!t1.finished()) {
        t1.down();
        cout << t1.get_time() << endl;
    return 0;
}