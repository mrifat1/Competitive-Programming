#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100010];
bool vis[100010];
int roads[100010];
void dfs(int val){
    vis[val] = 1;
    int sz = adj[val].size();
    for(int i = 0; i < sz; i++)
    {
        if(!vis[adj[val][i]])
        {
            dfs(adj[val][i]);
        }
    }
}
int main()
{
    int n,m,o,p;
    cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        cin>>o>>p;
        adj[o].push_back(p);
        adj[p].push_back(o);
    }
    int cnt = 0;
    int j = 0;
    for(int i = 1;i <= n; i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            cnt++;
            roads[j++] = i;
            dfs(i);
        }
    }
    cout<<cnt-1<<endl;
    for(int i = 0; i < cnt-1; i++)
    {
        cout<<roads[i]<<" "<<roads[i+1]<<endl;
    }


}