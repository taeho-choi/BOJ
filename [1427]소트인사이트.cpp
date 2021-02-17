#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    vector<short> v;
    string s;
    cin >> s;
    v.resize(s.length());
    for(int i = 0; i < s.length(); i++)
        v[i] = s.at(i) - 48;
    sort(v.begin(), v.end(), greater<short>());
    for(int e : v)
        cout << e;
    return 0;
}