// Example from C++ Primer Plus
#include <iostream>
#include "support.cpp"  //???
using namespace std;
double warming = 0.3;
void update(double dt);
void local();

int main()
{
    cout << "Global warming is " << warming << " degrees." << endl;
    update(0.1);
    cout << "Global warming is " << warming << " degrees." << endl;
    local();
    cout << "Global warming is " << warming << " degrees." << endl;
    return 0;
}