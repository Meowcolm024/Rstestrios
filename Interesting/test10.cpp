// 砂漠の公園 [MISSION LEVEL: B]

#include <iostream>
using namespace std;
int main() {
    int n, win = 0;
    cin >> n;
    string teams[n];
    int score[n], wg[n], dg[n], lg[n];
    for (int i = 0; i < n; i++) {
        cin >> teams[i];
        score[i] = 0;
        wg[i] = 0;
        dg[i] = 0;
        lg[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        string team = teams[i];
        for (char game : team) {
            switch (game)
            {
                case 'W':
                    score[i]+=2;
                    wg[i]++;
                    break;
                case 'D':
                    score[i]++;
                    dg[i]++;
                    break;
                case 'L':
                    lg[i]++;
                    break;
                default:
                    break;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (score[i] > score[win])
            win = i;

    cout << win + 1 << " " << score[win] << " ";
    cout << wg[win] << " " << dg[win] << " " << lg[win] << endl;

    return 0;
}
 