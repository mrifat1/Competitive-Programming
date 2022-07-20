#include<bits/stdc++.h>
using namespace std;
bool vis[105][105];
string v[105];
string s;
// vector<string>v;
int dm[] = {-1,-1,-1,0,1,1,1,0};
int dn[] = {1,0,-1,-1,-1,0,1,1};
int m,n;

void dfs(int x,int y)
{
    vis[x][y] = 1;
    int dummyOne,dummyTwo;
    for(int i = 0; i < 8; i++)
    {
        dummyOne = dm[i] + x;
        dummyTwo = dn[i] + y;
        if(dummyOne>=0 && dummyOne < m && dummyTwo >= 0 && dummyTwo < n && !vis[dummyOne][dummyTwo])
        {
            vis[dummyOne][dummyTwo] = 1;
            if(v[dummyOne][dummyTwo] == '@')
                dfs(dummyOne,dummyTwo);
        }
    }
}
int main()
{
    while(1){
        cin>>m>>n;
        if(m==0)
            break;
        
        // v.clear();
        
        for(int i = 0; i < m; i++)
        {
            cin>>v[i];
            // v.push_back(s);
        }
    // for(int i = 0; i < m; i++)
    // {
    //  cout<<str[i]<<endl;
    // }
    int cnt = 0;
    memset(vis,0,sizeof(vis));
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(!vis[i][j])
            {
                vis[i][j] = 1;
                if(v[i][j]=='@'){
                    ++cnt;
                    dfs(i,j);
                }
            }
        }
        
    }
    cout<<cnt<<endl;

    }
    
}