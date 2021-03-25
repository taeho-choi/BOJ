#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	cin >> a;
	if (a >= 1 && a <= 100)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 0; j < a - i; j++)
			{
				cout << " ";
			}
			for (int k = 0; k < i; k++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	return 0;
}