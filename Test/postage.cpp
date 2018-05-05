#include <iostream>
using namespace std;

int main()
{
    const float LOW = 0.6;
    const float MID = 1.0;
    const float HIGH = 1.6;
    short int weight;

    cout << "Mail Service" << endl;
    cout << "Please enter the weight of your mail: ";
    cin >> weight;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios::showpoint);

    if (0 < weight && weight <= 80)
    {
        cout << "The postage is $" << LOW << endl;
    }else if(80 < weight && weight <= 120)
    {
        cout << "The postage is $" << MID << endl;
    }else if(120 < weight && weight <= 200)
    {
        cout << "The postage is $" << HIGH << endl;
    }else if(200 < weight)
    {
        cout << "Parcel Post required." << endl;
    }else
    {
        cout << "Error" << endl;
    }

    return 0;
}