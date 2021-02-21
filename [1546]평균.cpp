#include <iostream>
using namespace std;

int main()
{
	float score[1000];
	int sub, max_idx;
	int max = 0;
	float average = 0.f;

	cin >> sub;
	for (int i = 0; i < sub; i++)
	{
		cin >> score[i];
		if (score[i] > max)
		{
			max = score[i];
			max_idx = i;
		}
	}
	for (int i = 0; i < sub; i++)
	{
		score[i] = score[i] / max * 100;
		average += score[i];
	}
	average /= sub;
	cout << average;
}