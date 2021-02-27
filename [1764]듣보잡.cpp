#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	string input;
	cin >> n >> m;
	vector<string> v;
	vector<string> v_dbj;

	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (binary_search(v.begin(), v.end(), input))
		{
			v_dbj.push_back(input);
		}
	}

	sort(v_dbj.begin(), v_dbj.end());

	cout << v_dbj.size() << endl;
	for (const auto& e : v_dbj)
	{
		cout << e << endl;
	}

	return 0;
}