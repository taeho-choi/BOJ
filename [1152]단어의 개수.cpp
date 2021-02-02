#include <iostream>
#include <string>
using namespace std;

int main()
{
	int wordCnt = 0;
	string s;
	getline(cin, s);
	int start = 0;
	int end = s.size() - 1;

	if (s.size() == 1 && s.at(0) != ' ')
	{
		wordCnt = 1;
	}
	else if (s.size() == 1 && s.at(0) == ' ')
	{
		wordCnt = 0;
	}
	else
	{
		if (s.size() != 0)
		{
			while (s.at(start) == ' ' && start < s.size() - 1)
				start++;
			while (s.at(end) == ' ' && end > 0)
				end--;

			if (start <= end)
			{
				wordCnt++;
				for (int i = start; i <= end; i++)
				{
					if (s.at(i) == ' ')
					{
						wordCnt++;
					}
				}
			}
		}
		else
		{
			wordCnt = 0;
		}
	}

	cout << wordCnt;
	return 0;
}