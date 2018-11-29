#include <iostream>

const int len = 7;
void merge(int arr[], int left, int mid, int right);
void sort(int arr[], int left, int right);

int main()
{
    using namespace std;
    int arr[len] = {9,5,6,2,3,7,4};
    sort(arr, 0, len-1);
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int left, int mid, int right)
{
    int len1 = mid - left + 1;
    int len2 = right - mid;
    int arr1[len1], arr2[len2];

    for (int i = 0; i < len1; i++)
        arr1[i] = arr[left + i];
    for (int i = 0; i < len2; i++)
        arr2[i] = arr[mid + i + 1];
    
    int p = 0, q = 0;

    for (int k = left; k < (right+1); k++)
    {
        if (arr1[p] <= arr2[q])
        {
            if (p == len1)
            {
                arr[k] = arr2[q];
                q++;
                continue;
            }
            arr[k] = arr1[p];
            p++;
            continue;
        }
        if (arr1[p] > arr2[q])
        {
            if (q == len2)
            {
                arr[k] = arr1[p];
                p++;
                continue;
            }
            arr[k] = arr2[q];
            q++;
            continue;
        }
    }
}

void sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        sort(arr, left, mid);
        sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}