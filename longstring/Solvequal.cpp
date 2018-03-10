#include <iostream>
#include <cstring>

using namespace std;

float solveX(float a1, float b1, float c1, float a2, float b2, float c2)
{
    float ua1 = a1, ub1 = b1, uc1 = c1, ua2 = a2, ub2 = b2, uc2 = c2;

    float x = (uc1*ub2-ub1*uc2)/(ua1*ub2-ub1*ua2);

    return x;
};

float solveY(float a2, float b2, float c2, float x)
{
    float ua2 = a2, ub2 = b2, uc2 = c2, ux = x;

    float y = (uc2-ua2*x)/b2;
    
    return y;
};

int main()
{
    float outX, outY;
    
    string equalIn[6] = {"a1","b1","c1","a2","b2","c2"};

    float equalNum[6];

    cout << "Equation is:" << endl << "a1x+b1y=c1" << endl << "a2x+b2y=c2";
    cout << endl;

    for(int i=0; i < 6; i++)
    {
        cout << "Enter " << equalIn[i] << " : ";
        cin >> equalNum[i];
    };

    outX = solveX(equalNum[0],equalNum[1],equalNum[2],equalNum[3],equalNum[4],equalNum[5]);
    outY = solveY(equalNum[3],equalNum[4],equalNum[5],outX);
    
    cout << "The x is: " << outX << endl;
    cout << "The y is: " << outY << endl;

    return 0;
};