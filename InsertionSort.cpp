#include <iostream>

const int len = 7;

void sort(int arr[], int len)
{
    int key, j;
    for (int i = 1; i < len; i++)
    {
        key = arr[i];
        j = i - 1;
        while ((j > -1) && (arr[j] > key) )
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    using namespace std;
    int arr[len] = {5,4,1,2,3,7,6};
    sort(arr, len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}