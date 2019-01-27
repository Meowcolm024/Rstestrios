// 機械の総合病院 [MISSION LEVEL: C]

#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string t;
    bool digitOK = false, charOK = false;
    cin >> t;
    if (t.size() < 6) {
        cout << "Invalid" << endl;
        return 0;
    }
    for (char a : t) {
        if (isdigit(a))
            digitOK = true;
        if (isalpha(a))
            charOK = true;
    }
    if (!(digitOK && charOK)) {
        cout << "Invalid" << endl;
        return 0;
    }
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == t[i+1] && t[i+1] == t[i+2]) {
            cout << "Invalid" << endl;
            return 0;
        }
    }
    cout << "Valid" << endl;
    return 0;
}