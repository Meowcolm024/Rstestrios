// 学べない学校 [MISSION LEVEL: C]

#include <iostream>
using namespace std;
int main(){
    char a, b;
    int times;
    int aCounter = 0, bCounter = 0;

    cin >> times;

    for (int i = 0; i < times; i++) {
        cin >> a >> b;
        switch (a)
        {
            case 'c': {
                switch (b)
                {
                    case 'c':
                        break;
                    case 'p':
                        aCounter++;
                        break;
                    case 'g':
                        bCounter++;
                        break;
                }
                break;
            }
            case 'p': {
                switch (b)
                {
                    case 'c':
                        bCounter++;
                        break;
                    case 'p':
                        break;
                    case 'g':
                        aCounter++;
                        break;
                }
                break;
            }
            case 'g': {
                switch (b)
                {
                    case 'c':
                        aCounter++;
                        break;
                    case 'p':
                        bCounter++;
                        break;
                    case 'g':
                        break;
                }
                break;
            }
        }
    }

    cout << aCounter << endl << bCounter << endl;
    return 0;
}