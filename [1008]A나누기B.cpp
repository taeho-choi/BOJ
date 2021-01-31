#include <iostream>
using namespace std;

int main()
{
	cout.precision(20);
	double a = 0;
	double b = 0;
	cin >> a >> b;
	if (a > 0 && b < 10)
	{
		cout << a / b;
	}

	return 0;
}