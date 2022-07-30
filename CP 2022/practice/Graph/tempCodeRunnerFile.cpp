#include<bits/stdc++.h>
using namespace std;
vector<int>vec[100010];
vector<int>finalVec;
int cnt,total,ar[10010];
bool vis[10010];
void dfs(int nd)
{
    vis[nd] = 1;
    cnt++;
    total += ar[nd];

    for(int i = 0; i < vec[nd].size(); i++)
    {
        int val = vec[nd][i];
        if(!vis[val])
        {
            dfs(val);
        }

    }
}
int main()
{
    int n,m,u,v,tc,cas = 0;
    cin>>tc;
    while(tc--)
    {

    cin>>n>>m;
    memset(vis,0,sizeof(vis));
    for(int i = 1;i <= n; i++)
    {
        cin>>ar[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    int flag = 0;
    for(int i = 1;i <= n; i++)
    {
        cnt = 0;
        total = 0;
        if(!vis[i])
        {
            dfs(i);
            if(total % cnt == 0)
            {
                finalVec.push_back(total/cnt);
            }
            else{
                flag = 1;
                break;
            }

        }
    }
    for(int i = 1; i < finalVec.size(); i++)
    {
        if(finalVec[i] != finalVec[i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Case "<<++cas<<": "<<"No"<<endl;
    }
    else{
        cout<<"Case "<<++cas<<": "<<"Yes"<<endl;
    }
    for(int i = 1; i <= n; i++)
    vec[m].clear();

    finalVec.clear();
    }


    

}