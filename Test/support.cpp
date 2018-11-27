// Example from C++ Primer Plus
#include <iostream>
extern double warming;
void update(double dt);
void local();

using std::cout;
using std::endl;
void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees." << endl;
}
void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees. \n";
    cout << "But global warming = " << ::warming;
    cout << " degrees." << endl;
}