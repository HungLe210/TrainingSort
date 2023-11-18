#include<algorithm>
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    while (true)
    {
        int n, a, b, check;
        cin >> n >> a >> b;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        sort(h.begin(), h.end());
        check = h[n - a] - h[b-1];
        if (check > 1)
            cout << check;
        else
            cout << 0;
    }
}