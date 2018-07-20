//Example from C++ Primer Plus

#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    cout << cookies << " = array address, ";
    cout << sizeof cookies << " = sizeof cookies" << endl;
    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies,3);
    cout << "First three eaters ate " << sum << endl;
    sum = sum_arr(cookies + 4, 4);
    cout << "Laast four eaters ate " << sum << endl;
    return 0;
}
int sum_arr(int arr[], int n)
{
    int total = 0;
    cout << arr << " = arr, ";
    cout << sizeof arr << " = sizeof arr" << endl;
    for (int i =0;i < n; i++)
    {
        total = total + arr[i];
    }
    return total;
}