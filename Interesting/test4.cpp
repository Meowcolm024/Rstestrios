// 錆びついた電波塔 [MISSION LEVEL: D]

#include <iostream>
using namespace std;
int main() {
    int size, count = 0;
    cin >> size;
    int amplify[size];
    for (int i = 0; i < size; i++) {
        cin >> amplify[i];
    }
    for (int p : amplify)
        if (p > 5)
            count++;
    cout << count << endl;
    return 0;
}