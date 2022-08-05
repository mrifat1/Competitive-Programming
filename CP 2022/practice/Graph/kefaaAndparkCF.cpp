#include<bits/stdc++.h>
using namespace std;
int ar[2000200],dig[200020],vis[200020],m,result;
vector<int>vec[200020];
void treee(int node, int cnt, int mxcnt)
{
    vis[node] = 1;

    if(node > 1 && dig[node]==1 && mxcnt <= m)
    {
        result++;
    }

    for(int i = 0; i < vec[node].size(); i++)
    {
        int val = vec[node][i];
        if(!vis[val])
        {
            int store = max(mxcnt,cnt+ar[val]);
            if(ar[val])
            {
                treee(val,cnt+1,store);
            }
            else
            {
                treee(val,0,store);
                
            }
        }

    }
}
int main()
{
    int n,u,v;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        cin>>ar[i];
        /* code */
    }
    for(int i = 1; i < n; i++)
    {
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
        dig[u]++;
        dig[v]++;
    }
   
       
    if(ar[1])
    {
        treee(1,1,1);

    }
    else{
        treee(1,0,0);
    }
    cout<<result<<endl;
    

}