#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int minX, minY;
	w - x > x ? minX = x : minX = w - x;
	h - y > y ? minY = y : minY = h - y;
	minX > minY ? cout << minY : cout << minX;
	return 0;
}