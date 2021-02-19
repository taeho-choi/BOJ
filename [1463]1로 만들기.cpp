#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n + 1];

	for (int i = 2; i < n + 1; i++)
	{
		arr[i] = INT_MAX;
	}
	arr[1] = 0;

	for (int i = 2; i < n + 1; i++)
	{
		if (i % 3 == 0)
		{
			if (arr[i] > arr[i / 3])
			{
				arr[i] = arr[i / 3] + 1;
			}
		}
		if (i % 2 == 0)
		{
			if (arr[i] > arr[i / 2])
			{
				arr[i] = arr[i / 2] + 1;
			}
		}
		if (arr[i] > arr[i - 1])
		{
			arr[i] = arr[i - 1] + 1;
		}
	}

	cout << arr[n];

	return 0;
}