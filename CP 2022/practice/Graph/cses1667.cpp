#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v[m+10];
    bool visited[n+10];
    int tracked[m+10];
    int dis[n+10];
    memset(visited,false,sizeof(visited)); 
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        /* code */
    }
    queue<int>q;
    q.push(1);
    visited[1]=true;
    dis[1]=1;
    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();
        for (int i = 0; i < v[frnt].size(); i++)
        {
            int val = v[frnt][i];
            if(!visited[val])
            {
                q.push(val);
                dis[val] = dis[frnt] + 1;
                visited[val] = true;
                tracked[val] = frnt;
            }
        }
    }
    if(dis[n]>0)
    {
        cout<<dis[n]<<endl;
        int tmp = n;
        vector<int>vec;
        vec.push_back(n);
        while(tmp!=1)
        {
            tmp = tracked[tmp];
            vec.push_back(tmp);
        }
        reverse(vec.begin(),vec.end());
        for(int i=0;i<vec.size()-1;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<vec[vec.size()-1]<<endl;

    }
    
}