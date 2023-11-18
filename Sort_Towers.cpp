#include<algorithm>
#include<vector>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> l(N);
    vector<int>height(1001);
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> l[i];
        height[l[i]]++;
        if (height[max] < height[l[i]])
            max = l[i];
    }
    int count = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (height[i] > 0)
            count++;
    }
    cout << height[max] <<" "<< count;

}
