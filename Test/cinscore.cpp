#include <iostream>

int main()
{
    using namespace std;
    const int max = 5;
    int score[max];

    cout << "enter your scores" << endl;
    cout << "you must enter " << max << "scores" << endl;
    
    int i;

    for(i =0; i < max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> score[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "please enter a number: ";
        };
    };

    float total = 0.0;
    
    for (i = 0; i < max; i++)
        total += score[i];
    cout << "total is " << total << endl;

    return 0;
}