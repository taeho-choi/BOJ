#include <iostream>
#include <algorithm>
using namespace std;

int main()
{	
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 1)
		{
			bool primeNum = true;
			for (int j = arr[i] - 1; j > 1; j--)
			{
				if (arr[i] % j == 0)
					primeNum = false;
			}
			if (primeNum)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}