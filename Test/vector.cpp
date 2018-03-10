#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    vector <int> num(10, 0);
    cin >> num[2];
    cin >> num[5];
    num.insert(num.begin(), 233);
    num.insert(num.begin() + 3, 666);
    num.erase(num.begin() + 2);

    int i ;
       for(i=0; i < num.size(); i++)
           cout << num[i]<< " ";
    cout << endl;
    cout << num.size() << " " << num.empty() << endl;
    
    return 0;
}