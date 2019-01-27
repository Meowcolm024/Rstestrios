// アンドロイドの生産工場 [MISSION LEVEL: D]

#include <iostream>
using namespace std;
int main() {
    string line, out = "";
    cin >> line;
    for (int i = 0; i < line.size(); i++)
        if (i % 2 == 0)
            out = out + line[i];
    cout << out << endl;
    return 0;
}