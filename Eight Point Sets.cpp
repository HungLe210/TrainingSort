#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 1e6 + 5;

struct Point
{
	int x, y;
	bool operator<(const Point& another)
	{
		return (x < another.x || (x == another.x && y < another.y));
	}
};
bool fre_x[MAX], fre_y[MAX];
int main()
{
	int x, y;
	vector<int> X, Y;
	vector<Point> points;
	for (int i = 0; i < 8; i++)
	{
		cin >> x >> y;
		points.push_back({ x, y });
		if (!fre_x[x])
		{
			fre_x[x] = true;
			X.push_back(x);
		}
		if (!fre_y[y])
		{
			fre_y[y] = true;
			Y.push_back(y);
		}
	}
	if (X.size() != 3 || Y.size() != 3)
	{ 
		cout << "ugly";
		return 0;
	}
	int index = 0;
	sort(X.begin(), X.end());
	sort(Y.begin(), Y.end());
	sort(points.begin(), points.end());
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j && i == 1)
				continue;
			if ((X[i] == points[index].x) && (Y[j] == points[index].y))
				index++;
			else
			{
				cout << "ugly";
				return 0;
			}
		}
	}
	cout << "respectable";
	return 0;
}