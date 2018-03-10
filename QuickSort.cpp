#include <iostream>

using namespace std;

void quick_sort(int arr[],int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
 
    while (i <= j) 
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) //swap
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        };
    };
    //recursion
    if (left < j)
        quick_sort(arr, left, j);
    if (i < right)
        quick_sort(arr, i, right);
};

int main()
{
    int number[5];

    for (int q = 0; q <= 4; q++)
    {
        cout << "Input: " ;
        cin >> number[q];
    };

    quick_sort(number,0,4);

    cout << "Quick Sort: ";

    for (int p = 0; p <= 4; p++)
    {
        cout << number[p] << " ";
    };

    cout << endl;

    return 0;
};