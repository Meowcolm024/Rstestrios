#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

vector<int> quickSort(vector<int> vec)
{
    if (vec.size() <= 1)
        return vec;
    vector<int> left, right;
    int pivot = vec[0];
    copy_if(++vec.begin(), vec.end(), back_inserter(left), [pivot](const int x) { return x <= pivot; });
    copy_if(++vec.begin(), vec.end(), back_inserter(right), [pivot](const int x) { return x > pivot; });
    left = quickSort(left);
    right = quickSort(right);
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());
    return left;
};

int main()
{
    vector<int> vec{3, 1, 7, 5, 6, 4, 7, 2, 98, 435, 56, 24, 43, -234, 52, -345, 4, -2, 48, 9, 12, 15, 23, -3, -54};
    auto xs = quickSort(vec);
    for (auto x : xs)
        cout << x << " ";
    cout << endl;
    return 0;
}