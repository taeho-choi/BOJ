#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(i == n)
            cout << 0;
        else
        {
            string s = to_string(i);
            int val = i;
            for(int j = 0; j < s.length(); j++)
            {
                val += s.at(j) - '0';
            }
            if(val == n)
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}