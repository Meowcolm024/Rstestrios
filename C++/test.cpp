#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec {5,1,2,3,4,5};
    vector<int> out;
    int pivot = 5;
    copy_if(++vec.begin(), vec.end(), back_inserter(out), [pivot](const int x) { return x >= pivot; });
    for (auto i : out)
        cout << i << " ";
    cout << endl;
    return 0;
}