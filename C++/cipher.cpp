#include <iostream>
#include <vector>
using namespace std;

vector<unsigned int> cipher(wstring x, wstring y)
{
    vector<unsigned int> a;
    int b;
    for (auto i : y)
        b += int(i);
    for (auto i : x)
        a.push_back(i);
    transform(a.begin(), a.end(), a.begin(), [b](auto x) { return x * b; });
    return a;
};

wstring decode(vector<unsigned int> x, wstring y)
{
    wstring a;
    int b;
    for (auto i : y)
        b += int(i);
    transform(x.begin(), x.end(), back_inserter(a), [b](auto x) { return wchar_t(x / b); });
    return a;
}

int main(int argc, char **args)
{
    wstring x, y;
    cout << "inpout msg: ";
    wcin >> x;
    cout << "input key: ";
    wcin >> y;
    auto r = cipher(x, y);
    for (auto i : r)
        cout << i << " ";
    cout << endl;
    auto s = decode(r, y);
    wcout << s << endl;
    return 0;
}