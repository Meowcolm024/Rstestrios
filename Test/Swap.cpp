#include <iostream>

using namespace std;

void swap(int *left, int *right)
{
    int tmp;
    tmp = *left;
    *left = *right;
    *right = tmp;
};

int main()
{
    int a = 5;
    int b = 9;

    cout << a << " " << b << endl;

    swap(a,b);

    cout << a << " " << b << endl;
    return 0;
};