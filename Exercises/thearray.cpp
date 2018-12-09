#include <iostream>
using namespace std;
const int len = 5;

void Fill_array(double array[], int len)
{
    double tmp;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter double #" << (i+1) << ": ";
        cin >> tmp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } 
        else if (tmp < 0)
            break;
        array[i] = tmp;
    }
}

void Show_array(const double array[], int len)
{
    for (int i = 0; i < len; i++) 
    {
        cout << "Property #" << (i + 1) << ": "; 
        cout << array[i] << endl;
    }
}

void Reverse_array(double array[], int len)
{
    double temp[len];
    for (int i = 0; i < len; i++)
    {
        int p = len-i-1;
        temp[p] = array[i];
    }
    for (int i = 0; i < len; i++)
        array[i] = temp[i];
}

int main()
{
    double array[len];
    Fill_array(array, len);
    cout << "--------" << endl;
    Show_array(array, len);
    cout << "--------" << endl;
    Reverse_array(array, len);
    Show_array(array, len);
    return 0;
}