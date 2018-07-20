#include <iostream>
using namespace std;

int main()
{
    char selected;

    cout << "Please enter one of the following choices:\n";
    cout << "h) hello world" << "       " << "w) what to do" << endl;
    cout << "g) go to sleep" << "       " << "j) just quit" << endl;

    cout << "Please enter a h, w, g or j: ";

    while(cin >> selected)
    {
        switch (selected)
        {
            case 'h':
                cout <<  "Let's say Hello World!" << endl;
                break;
            case 'w': 
                cout << "I have no idea..." << endl;
                break;
            case 'g':
                cout << "Have a good night." << endl;
                break;
            case 'j':
                cout << "That might be a good choice." << endl;
                break;
            default:
                cout <<"Please enter a h, w, g or j: ";
                continue;
        };
        break;
    };
    return 0;
}