// 有名なプールサイド [MISSION LEVEL: A]

// FAILED

#include <iostream>
using namespace std;

struct coord {
    int x;
    int y;
};

class House {
    private: 
        int width, height, d_w, d_h;
    public:
        House() {}
        void init(int w, int h, int dw, int dh) {
            width = w;
            height = h;
            d_w = dw;
            d_h = dh;
        }
        coord get_area() {
            return {width, height};
        }
        coord get_door() {
            return {d_w, d_h};
        }
        void show() {
            cout << width << " " << height << " " << d_w << " " << d_h << endl;
        }
};

int main() {
    // input section
    int h,w,n;
    cin >> h >> w >> n;
    House houses[n];
    for (int i = 0; i < n; i++) {
        int w,h,dw,dh;
        cin >> w >> h >> dw >> dh;
        houses[i].init(w,h,dw,dh);
    }
    int world[w][h];
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            world[j][i] = 0;

    // main section


    // output section
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++)
            cout << world[j][i];
        cout << endl;
    }
    return 0;
}