#include <iostream>
using namespace std;

int gcd(int n, int m)
{
    if (m == 0)
        return n;
    else
        return gcd(m, (n % m));
}

int main()
{
    int a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "GCD: " << gcd(a,b) << endl;
    return 0;
}