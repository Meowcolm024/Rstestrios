#include <iostream>
using namespace std;

int main()
{
    int s = 0, x = 1, n = 0;
    do
    {
        s += x;
        x = 3 * x - 1;
        n++;
    } while (n <= 9);
    cout << s << endl;
    return 0;
}