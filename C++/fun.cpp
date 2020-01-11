#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int twice(function<int(int)>& f, int x) {
    return f(f(x));
}

int main() {
    function<int(int)> f = [](int x){return x+1;};

    auto map = [](vector<int> x, function<int(int)> f) {
        transform(x.begin(), x.end(), x.begin(), f);
        return x;
        };

    vector<int> ha {1,2,3,4,5,6,7};
    vector<int> vec {1,2,3,4};
    vector<int> t {0 ,0, 0, 0};

    transform(vec.begin(), vec.end(), t.begin(), [](int x) {return x+1;});
    ha = map(ha, [](int x) {return x*2;});

    cout << twice(f, 2) << endl;

    for (auto x : t) {cout << x << " ";};
    cout << endl;

    for (auto x : vec) {cout << x << " ";};
    cout << endl;

    for (auto x : ha) {cout << x << " ";};
    cout << endl;
    
    return 0;
}