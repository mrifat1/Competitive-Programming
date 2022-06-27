#include<bits/stdc++.h>
using namespace std;
const int N = 105;
vector<int>v[105];
int ar[N][N];
int main()
{
    int n,u,k,uN;
    cin>>n;
    int store = n;
    
    while(n--)
    {
        cin>>u>>k;
        for (int i = 0; i < k; i++)
        {
            cin>>uN;
            // v[u].push_back(uN);
            ar[u][uN] = 1;
            /* code */
        }
    }
    int j,i;
    for(i = 1; i <= store; i++)
    {
        for(j = 1; j < store; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<ar[i][j]<<'\n';
    }
    
}