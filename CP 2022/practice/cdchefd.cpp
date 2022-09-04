#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int> > arr;
        // vector<vector<int> > arr;
        for (int i = 0; i < n; i++)
        {

            int k;
            cin >> k;
            vector<int> v;
            for (int j = 0; j < k; j++)
            {
                int l;
                cin >> l;
                v.push_back(l);
            }
            arr.push_back(v);
        }
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                set<int> ss;
                for (int kk = 0; kk < arr[i].size(); kk++)
                {
                    ss.insert(arr[i][kk]);
                }
                for (int jj = 0; jj < arr[j].size(); jj++)
                {
                    ss.insert(arr[j][jj]);
                }
                if (ss.size() == 5)
                {
                    check = true;
                    break;
                }
            }
            if (check)
                break;
        }
        if (check)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
