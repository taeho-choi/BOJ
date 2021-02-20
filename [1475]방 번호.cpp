#include <iostream>
using namespace std;


int main()
{
	int max = -1;
	string n;
	int num[10];
	cin >> n;

	for (int i = 0; i < 9; i++)
		num[i] = 0;

	for (int i = 0; i < n.length(); i++)
	{
		if (n.at(i) - 48 != 9)
			num[n.at(i) - 48]++;
		else
			num[6]++;
	}

	if (num[6] % 2 == 1)
		num[6]++;
	num[6] /= 2;

	for (int i = 0; i < 9; i++)
	{
		if (num[i] > max)
			max = num[i];
	}

	cout << max;
	
	return 0;
}