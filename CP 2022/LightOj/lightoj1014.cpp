#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long p, l, casee = 0;
    int t;
    vector<long long> v;
    cin >> t;
    while (t--)
    {
        cin >> p >> l;
        long long sub = p - l;
        if (sub <= l)
        {
            cout << "Case " << ++casee << ": impossible"
                 << "\n";
        }
        else
        {
            for (long long i = 1; i * i <= sub; i++)
            {
                if (sub % i == 0)
                {
                    if (i > l)
                        v.push_back(i);

                    if (sub / i != i && ((sub / i) > l))
                        v.push_back(sub / i);
                }
            }
            sort(v.begin(), v.end());
            printf("Case %lld: ", ++casee);
            for (long long i = 0; i < v.size(); i++)
            {
                if (i == v.size() - 1)
                    cout << v[i] << "\n";
                else
                    cout << v[i] << " ";
            }
            v.clear();
        }
    }
}