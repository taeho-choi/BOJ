#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool checked = true;
		bool a[26] = { 0, };
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{

			if (i != 0 && s.at(i - 1) != s.at(i) && a[s.at(i) - 97] == true)
				checked = false;
			else
				a[s.at(i) - 97] = true;
		}
		if (checked)
			cnt++;
	}
	cout << cnt;
}