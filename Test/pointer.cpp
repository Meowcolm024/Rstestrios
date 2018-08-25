#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int *ap = &a;

    /*
        a is an intager, &a is the adress
        ap ia a pointer, *ap is an intager 
    */

    cout << "a: " << a << "\n&a: " << &a << endl;
    cout << "ap: " << ap << "\n*ap: " << *ap << endl;

    return 0;
}