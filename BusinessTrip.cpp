#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool Reduce(int a, int b)
{
	return a > b;
}

int main()
{
	int k,count(0),sum(0);
	cin >> k;
	vector<int> B(12);
	for (int i = 0; i < 12; i++)
		cin >> B[i];
	sort(B.begin(), B.end(), Reduce);
	for (int i = 0; i < 12; i++)
	{
		if (sum >= k)
			break;
		sum += B[i];
		count++;
	}
	if (sum < k)
		cout << -1;
	else cout << count;
}