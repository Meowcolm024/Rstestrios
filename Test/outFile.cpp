//Example from C++ Primer Plus

#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    char productName[50];
    unsigned int produceYear;
    float productPrice;

    ofstream outFile;
    outFile.open("info.txt");

    cout << "Enter name of the product: ";
    cin.getline(productName,50);
    cout << "Enter production year: ";
    cin >> produceYear;
    cout << "Enter price of the product: ";
    cin >> productPrice;

    cout << fixed; //一般方式输出浮点数
    cout.precision(2); //浮点数精度
    cout.setf(ios_base::showpoint);
    cout << "Name: " << productName << endl;
    cout << "Year: " << produceYear << endl;
    cout << "Price: $" << productPrice << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Name: " << productName << endl;
    outFile << "Year: " << produceYear << endl;
    outFile << "Price: $" << productPrice << endl;

    outFile.close();

    return 0;
}