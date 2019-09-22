#include <iostream>
using namespace std;

template <typename a>
void map(a (*f) (a), a xs[], int len) {
    for (int i = 0; i < len; ++i)
        xs[i] = f(xs[i]);
}

template <typename a>
a dbl(a x) {
    return x * 2;
}

int main() {
    int xs[] = {1,2,3,4,5};
    map(dbl, xs, 5);
    for (auto x : xs)
        cout << x << " ";
    cout << endl;
    return 0;
}
