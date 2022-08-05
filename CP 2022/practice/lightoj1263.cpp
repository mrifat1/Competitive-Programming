#include<bits/stdc++.h>
using namespace std;
int ar[1010];
int cal[510];
vector<int>adj[100010];
int vis[1010];
int glbCnt;
int secondSum;
int casee;

void dfs(int va)
{
    vis[va]=1;
    glbCnt++;
    secondSum += ar[va-1];
    int sz = adj[va].size();
    for(int i = 0; i < sz; i++)
    {
        if(!vis[adj[va][i]])
        {
            dfs(adj[va][i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,u,v,sum = 0,no=0,t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        // sum+=ar[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int j = 0;
    no = 0;
    memset(vis,0,sizeof(vis));
    for(int i = 1; i <= n ; i++)
    {
        glbCnt = 0,secondSum=0;
        if(!vis[i])
        {
            dfs(i);
            if(secondSum % glbCnt)
            {
                no = 1;
                break;
            }
            else{
                cal[j++] = secondSum/glbCnt;
            }
        }
    }
    if(!no){
    for(int i = 1; i < j; i++)
    {
        if(cal[i] != cal[i-1]){
            no = 1;
            printf("Case %d: No\n",++casee);
            break;
        }
    }
    if(!no)
    {
        printf("Case %d: Yes\n",++casee);

    }
    }
    else{
        printf("Case %d: No\n",++casee);
    }
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
    }
    

}