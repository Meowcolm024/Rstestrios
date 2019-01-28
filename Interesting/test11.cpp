// 高層タワー [MISSION LEVEL: B]

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
        cin >> words[i];
    string composed = words[0];
    for (string word : words) {
        int max, j = 0;
        int cs = composed.size();
        int es = word.size();
        if (cs > es)
            max = es;
        else
            max = cs;
        string::size_type index = composed.find(word.substr(0, max), (cs - max));
        while (index == composed.npos) {
            max--;
            index = composed.find(word.substr(0, max), (cs - max));
        }
        if (max < 1)
            j = 0;
        else
            j = max;
        for (int p = j; p < es; p++)
            composed += word[p];
    }
    cout << composed << endl;
    return 0;
}