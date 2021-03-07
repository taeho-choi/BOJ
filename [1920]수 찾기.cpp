#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> v;
	v.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int target;
		cin >> target;
		if (binary_search(v.begin(), v.end(), target))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';

	}
	return 0;
}