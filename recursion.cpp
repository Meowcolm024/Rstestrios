#include <iostream>

using namespace std;

void hahaha(int i)
{
    i++;

    if (i < 10)
        hahaha(i);
};

int main()
{
    int number;
    cin >> number;
    hahaha(number);
    cout << number << endl;
    return 0;
};