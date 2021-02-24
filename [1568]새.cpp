#include <iostream>
using namespace std;

int main()
{
	int cnt = 1;
	int time = 0;
	int birds;
	cin >> birds;
	while (birds > 0)
	{
		if (birds - cnt < 0)
		{
			cnt = 1;
		}
		else
		{
			birds -= cnt++;
			time++;
		}
	}
	cout << time;
	return 0;
}