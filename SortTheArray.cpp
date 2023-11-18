#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    while (true)
    {
        int n, flag(0);
        cin >> n;
        int begin(0), end(n);
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        b = a;
        sort(b.begin(), b.end());
        if (b == a)
            cout << "yes" << endl <<"1 1"<< endl;
        else 
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                {
                    if (flag != 0)
                        break;
                    else
                    {
                        begin = i; flag++;
                        for (int j = i; j < n - 1; j++)
                        {
                            if (a[j] < a[j + 1])
                            {
                                end = j + 1;
                                break;
                            }
                        }
                    }
                }
            }
            sort(a.begin() + begin, a.begin() + end);
            if (flag <= 1 && a == b)
                cout << "yes" << endl << begin + 1 << " " << end << endl;
            else cout << "no"<<endl;
        }
    }
}

