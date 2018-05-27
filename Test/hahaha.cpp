#include <iostream>
using namespace std;

void hahaha(int arr[])
{
    arr[1] = 1;
}

int main()
{
    int nothing[5];

    hahaha(nothing);

    cout << nothing[1] << endl;

    return 0;
}