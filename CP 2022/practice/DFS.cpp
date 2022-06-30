#include<bits/stdc++.h>
using namespace std;
int vis[105];
// int d[105];
// int f[105];
int ar[105][105];
int cnt,d[105],f[105];
int sizeOfV[105];
// vector<int>v[105];
void dfs(int node, int sz)
{
    vis[node]=1;
    d[node] = ++cnt;
    // cout<<"size "<<sz<<endl;
    for(int i = 0; i < sz; i++)
    {
        if(!vis[ar[node][i]])
        {
            dfs(ar[node][i],sizeOfV[ar[node][i]]);
        }
    }
    f[node] = ++cnt;

}
int main()
{
    int n,u,vi;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>u>>vi;
        int k;
        sizeOfV[u] = vi;
        for (int j = 0; j < vi; j++)
        {
            /* code */
            cin>>ar[u][j];
        }
    }
    for(int i = 1 ; i <= n; i++)
    {
        if(!vis[i])
            dfs(i,sizeOfV[i]);
    }
    for(int i = 1 ; i <= n; i++)
    {
        cout<< i <<" "<<d[i]<<" "<<f[i]<<endl;
    }

    
    

}