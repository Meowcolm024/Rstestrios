#include <iostream>
#include <cmath>
using namespace std;
#define arSize 2000
double arr[arSize];
int main()
{
    for (int i = 0; i < arSize; i++)
    {
        arr[i] = pow((i+1),2);
    }
    cout << arr[1999] << endl;
    return 0;
}