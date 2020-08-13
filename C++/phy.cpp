#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

auto f = [](int x) -> int { return x + 1; };

auto println = [](auto x) { cout << x << endl; };

// currying :)
auto add = [](auto x) {
    return [x](auto y) {
        return x + y;
    };
};

auto add2 = add(2);

int main()
{
    auto x = 1;
    cout << f(1) << endl;

    println("hello");
    println(add(1)(2));
    println(add2(2));

    vector<int> arr{1, 2, 3};
    vector<int> y;
    transform(arr.begin(), arr.end(), back_inserter(y), add(1));
    for (auto i : y)
        cout << i << " ";
    cout << endl;

    return 0;
}