#include <iostream>
using namespace std;

int main()
{
	int n;
	int num;
	int cnt = 1;
	cin >> n;
	
	num = ((n % 10) * 10) + ((n / 10) + (n % 10)) % 10;

	while (num != n)
	{
		num = ((num % 10) * 10) + ((num / 10) + (num % 10)) % 10;
		cnt++;
	}

	cout << cnt;

	return 0;
}