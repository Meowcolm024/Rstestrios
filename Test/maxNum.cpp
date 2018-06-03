#include <iostream>
using namespace std;

int max(int arr[],int len)
{
    int max = arr[0];
    int i = 1;

    while (i < len)
    {
        if (max <= arr[i])
            max = arr[i];
        i++;
    }

    return max;
}

int main()
{
    int number[9] = {3,2,4,5,1,16,8,7,0};
    int len = sizeof(number)/sizeof(int);

    cout << max(number,len) << endl;

    return 0;
}