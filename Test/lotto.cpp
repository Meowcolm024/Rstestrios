#include <iostream>

using namespace std;

long double possibilty(unsigned numbers,unsigned picks)
{
    long double result = 1.0;
    double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result  * n / p;
    }

    return result;
}

int main()
{
    double total, choices;

    cout << "Enter number of choices and picks: ";
    
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << possibilty(total,choices);
        cout << " of winning" << endl;
        cout << "Next two numbers(q to quit): ";
    }

    return 0;
}