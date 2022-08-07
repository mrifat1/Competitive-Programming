#include<bits/stdc++.h>
using namespace std;
bool vis[100];
int dis[110];
int exist[110];
int main()
{
    int n,u,k;
    cin>>n;
    int temp = n;
    vector<int>v[110];
    while(n--)
    {
        cin>>u>>k;
        for (int i = 0; i < k; i++)
        {
            int val;
            cin>>val;
            v[u].push_back(val);
            /* code */
        }
    }
    queue<int>q;
    q.push(1);
    vis[1]=true;
    dis[1] = 0;
    exist[1]=1;
    while(!q.empty()){
        int fr = q.front();
        q.pop();
        for(int i = 0;i < v[fr].size();i++)
        {
            int lst = v[fr][i];
            if(!vis[lst])
            {
                q.push(lst);
                exist[lst]=1;
                dis[lst] = dis[fr] + 1;
                vis[lst] = true;
            }
        }
    }
    for(int i = 1; i <= temp; i++)
    {
        if(exist[i])
        cout<<i<<" "<<dis[i]<<endl;
        else
        cout<<i<<" "<<"-1"<<endl;
    }
}