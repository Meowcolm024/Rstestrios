#include <iostream>
#include <cmath>
using namespace std;

#define arSize 1000
double arr[arSize];

int main()
{
    //defining the array
    for (int i = 0; i < arSize; i++)
    {
        arr[i] = pow((i+1),2);
    }

    double guess = 0, count = 0, tryans = 0;
    int x = 0, y = 0;
    const int max_limit = 10;

    while (count < max_limit)
    {
        while (x < arSize)
        {
            while(y < arSize)
            {
                tryans = arr[x] + arr[y];
                
                if (tryans < guess)
                {
                    y++;
                    continue;
                }
                else if (tryans == guess)
                {
                    count++;
                    if (count == max_limit)
                        break;
                    break;
                }
                else if (tryans > guess)
                {
                    break;
                }
            }
            if (count == max_limit)
                break;
            x++;
            y = x;
        }
        if (count == max_limit)
                break;
        guess++;
        count = 0;
        x = 0;
        y = x;
    }

    cout << guess << endl;

    return 0;
}