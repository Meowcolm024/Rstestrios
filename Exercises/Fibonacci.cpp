#include <iostream>

int main()
{
    using namespace std;
    int arr_size, number,result;

    //input 
    cout << "Enter a number: ";
    while (cin >> number)
    {
        if (number < 1)
        {
            cout << "Enter a number: ";
            continue;
        }else{
            break;
        }
    }
    arr_size = number + 1;

    //main 
    int arr[arr_size];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < arr_size; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        result = arr[i];
    }
    cout << "Result: " << result << endl;

    return 0;
}
