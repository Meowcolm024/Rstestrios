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
        int cs = composed.size();
        int es = word.size();
        int i = cs-1, j = 0;
        while (composed[i] != word[0]) {
            i--;
            j++;
        }
        if (j >= es)
            j = -1;
        for (int p = j+1; p < es; p++)
            composed+= word[p];
    }
    cout << composed << endl;
    return 0;
}