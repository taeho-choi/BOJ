#include <iostream>
using namespace std;

int main()
{
	int arr[301][301];
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];
	}

	int T;
	int i, j, x, y;
	cin >> T;
	while(T-- > 0)
	{
		int sum = 0;
		cin >> i >> j >> x >> y;
		for (int l = i; l <= x; l++)
		{
	        for (int o = j; o <= y; o++)
                sum += arr[l][o];

		}
		cout << sum << '\n';
	}
	return 0;
}