#include <iostream>
#include "Timer.h"

using namespace std;

int main() {
    Timer t1 = Timer(5,0);
    t1.down();
    cout << t1.get_time() << endl;
    return 0;
}