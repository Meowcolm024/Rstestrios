// 隔離された街のゲート [MISSION LEVEL: B]

#include <iostream>
using namespace std;

struct coord {
    int x;
    int y;
};

int main() {
    int width, height, steps;
    char ctrl;
    cin >> width >> height >> steps;
    coord player = {0,0};
    for (int i = 0; i < steps; i++) {
        cin >> ctrl;
        switch (ctrl)
        {
            case 'U':
                player.y++;
                break;
            case 'R':
                player.x++;
                break;
            case 'D':
                player.y--;
                break;
            case 'L':
                player.x--;
                break;
        }
    }
    if (player.x > (width-1) || player.y > (height-1) || player.x < 0 || player.y < 0) {
        cout << "invalid" << endl;
    } else {
        cout << "valid" << endl;
    }
    return 0;
}