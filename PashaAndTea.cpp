#include<algorithm>
#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    int n; int w;
    cin >> n >> w;
    int all = 2 * n;
    vector<int> a(all);
    for (int i = 0; i < all; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    float pour = min(float(a[0]),float(a[n])/2);
    cout << setprecision(9)<<(min(float(w),3*pour*n));
}
