#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int i,j,m,n;
void dfs(int i,int j)
{
    if(i<0 || j<0 || i==m || j==n)
        return;
    if(v[i][j]=='*')
        return;
    if(v[i][j]=='@')
        v[i][j]='*';
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i+1,j+1);
    dfs(i+1,j-1);
    dfs(i-1,j);
    dfs(i-1,j-1);
    dfs(i-1,j+1);
}
int main()
{
    while(cin>>m>>n){
        if(m==0)
          break;
    string str;
    v.clear();
    for(i=0;i<m;i++){
        cin>>str;
        v.push_back(str);
    }
    int cnt = 0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i][j]=='@')
            {
                cnt++;
                dfs(i,j);
            }

        }
    }
    cout<<cnt<<endl;
    }

}
