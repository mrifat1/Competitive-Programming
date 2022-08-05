#include <bits/stdc++.h>
using namespace std;
int minElement(long long val[], long long row, long long col)
{
	vector<vector<int> > dp(
		row + 1,
		vector<int>(
			col + 1, 0));

	for (int i = 1; i <= col; i++) {
		dp[0][i] = INT_MAX - 1;
	}

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (val[i - 1] > j) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = min(dp[i - 1][j],dp[i][j - val[i - 1]] + 1);
			}
		}
	}
	return dp[row][col];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	long long arr[50],t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int res = minElement(arr,n,d);
        if(res == INT_MAX - 1)
        {
            cout<<"NO"<<endl;
        }
        else
        cout <<res<<endl;
    }

	return 0;
}
