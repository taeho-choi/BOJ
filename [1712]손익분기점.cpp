#include <iostream>
using namespace std;


int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long profit = a;
	if (b >= c)
	{
		cout << -1;
	}
	else
	{
		cout << profit / (c - b) + 1;
	}

	return 0;
}