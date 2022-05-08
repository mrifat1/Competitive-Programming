#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> v;
    long long n, k;
    cin >> n >> k;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() < k)
        cout << "-1" << endl;
    else
        cout << v[k - 1] << endl;
}