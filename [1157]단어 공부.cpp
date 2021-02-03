#include <iostream>
using namespace std;

int main()
{
	int alpha[26];
	string s = "";
	int max = -1;
	int maxIdx = -1;
	bool isMaxExist = true;
	
	cin >> s;

	for (int i = 0; i < 26; i++)
	{
		alpha[i] = 0;
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (s.at(i) >= 65 && s.at(i) <= 90)
		{
			alpha[s.at(i) - 65]++;
		}
		else if (s.at(i) >= 97 && s.at(i) <= 127)
		{
			alpha[s.at(i) - 97]++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == alpha[i])
		{
			if (maxIdx == -1)
			{
				maxIdx = i;
			}
			else
			{
				isMaxExist = false;
			}
		}
	}

	if (isMaxExist)
		cout << (char)(maxIdx + 65);
	else
		cout << '?';

	return 0;
}