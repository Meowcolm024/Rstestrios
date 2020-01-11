#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

vector<int> quickSort(vector<int> vec) {
    if (vec.size() <= 1) return vec;
    vector<int> xs, left, right, outl, outr, out;
    int pivot = vec[0];
    xs.assign(vec.begin(), vec.end());
    xs.erase(xs.begin());
    copy_if(xs.begin(), xs.end(), back_inserter(left), [pivot](const int x){return x <= pivot;});
    copy_if(xs.begin(), xs.end(), back_inserter(right), [pivot](const int x){return x > pivot;});
    outl = quickSort(left);
    outr = quickSort(right);
    out.insert(out.end(), outl.begin(), outl.end());
    out.push_back(pivot);
    out.insert(out.end(), outr.begin(), outr.end());
    return out;
};

int main() {
    vector<int> vec {3,1,7,5,6,4,7,2,98,435,56,24,43,-234,52,-345,4,-2,48,9,12,15,23,-3,-54};
    auto xs = quickSort(vec);
    for (auto x : xs) cout << x << " ";
    cout << endl;
    return 0;
}