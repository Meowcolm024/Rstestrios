// お金が引き出せない銀行 [MISSION LEVEL: D]

#include <iostream>
using namespace std;
int main() {
    int stored, taken, left;
    cin >> stored;
    cin >> taken;
    left = stored - taken;
    if (left < 0) {
        cout << "error" << endl;
    } else {
        cout << left << endl;
    }
    return 0;
}