#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i *= 10)
		sum += n - i + 1;
	cout << sum;
	return 0;
}