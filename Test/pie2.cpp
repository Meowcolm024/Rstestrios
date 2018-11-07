#include <iostream>
using namespace std;
int main() 
{
    double pie = 1.0;
    for (int i = 2; i < 1000000; i++)
        pie = pie - ((i%2) * -2 + 1) * (1 / static_cast<double>(2*i - 1));
    cout << "pi: " << pie * 4 << endl;
    return 0;
}