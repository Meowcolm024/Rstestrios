// 荒れ果てたオフィス [MISSION LEVEL: D]

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int rank[n];
    string name[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> rank[i];
    }
    for (int i = 0; i < n; i++) {
        if (rank[i] >= 3)
            cout << name[i] << endl;
    }
    return 0;
}