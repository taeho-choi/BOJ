#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	while (s != "0")
	{
		bool b = true;
		for (int i = 0; i < s.length(); i++)
		{
			int j = s.length() - 1 - i;
			if (j <= i)
				break;
			else
			{
				if (s.at(i) != s.at(j))
				{
					b = false;
					break;
				}
			}
		}
		if (b)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
		cin >> s;
	}
	return 0;
}