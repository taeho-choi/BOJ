#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
			cnt++;
		else
		{
			string s = to_string(i);
			int compare;
			for (int j = 1; j <= s.length(); j++)
			{
				if (j == s.length())
					cnt++;
				else if (j == 1)
					compare = s.at(j) - s.at(j - 1);
				else
				{
					if (compare != s.at(j) - s.at(j - 1))
						break;
				}
			}
		}
	}
	cout << cnt;
	return 0;
}