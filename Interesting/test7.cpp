// 荒れ果てたショップ [MISSION LEVEL: C]

#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    for (int i = a; i < b+1; i++) {
        int zeros = n - to_string(i).size();
        for (int j = 0; j < zeros; j++)
            cout << "0";
        cout << i << endl;
    }
    return 0;
}