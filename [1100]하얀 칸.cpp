#include <iostream>
using namespace std;

int main()
{
	string line[8];
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> line[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (line[i].at(j) == 'F' && i % 2 == j % 2)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}