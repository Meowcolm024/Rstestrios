#include <iostream>
using namespace std;

int main()
{
    double pie = 1.0;
    for(int i = 2; i < 1000000; i++)
        if(i%2 == 0)
            pie = pie - static_cast<double>(1 / static_cast<double>(2*i - 1));
        else
            pie = pie + static_cast<double>(1 / static_cast<double>(2*i - 1));
    cout << "pie: " << pie * 4 << endl;
    return 0;
}