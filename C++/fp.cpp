#include <iostream>
#include <vector>
using namespace std;

template <typename a>
vector<a> map(a (*f) (a), vector<a> xs) {
    int len = xs.size();
    vector<a> ys(len);
    for (int i = 0; i < len; ++i)
        ys[i] = f(xs[i]);
    return ys;
}

template <typename a>
vector<a> filter(bool (*f) (a), vector<a> xs) {
    int len = xs.size();
    vector<a> ys;
    for (auto x : xs)
        if (f(x)) ys.push_back(x);
    return ys;
}

template <typename a>
vector<a> zip(a (*f) (a, a), vector<a> xs, vector<a> ys) {
    int len = xs.size();
    int len2 = ys.size();
    if (len != len2) return (xs);
    vector<a> zs(len);
    for (int i = 0; i < len; ++i)
        zs[i] = f(xs[i], ys[i]);
    return zs;
}

template <typename a>
a dbl(a x) {
    return x * 2;
}

template <typename a>
bool pos(a x) {
    return x > 0;
}

template <typename a>
a add(a x, a y) {
    return x + y;
}

template <typename a>
void printArr(vector<a> arr) {
    for (auto ar : arr)
        cout << ar << " ";
    cout << endl;
}

int main() {
    const int L = 5;
    vector<int> xs = {-2,-1,0,1,2};
    vector<int> ys = map(dbl, xs);
    vector<int> zs = filter(pos, xs);
    vector<int> ps = zip(add, xs, ys);
    printArr(xs);
    printArr(ys);
    printArr(zs);
    printArr(ps);
    return 0;
}
