#include <bits/stdc++.h>
using namespace std;
vector<int>vec[105];
int cost[105][105];
int cst2;
bool cycle(int node,int child)
{

    for(int i=0;i<vec[node].size();i++)
    {
        int val = vec[node][i];
        if(val != child)
        {
            cst2 += cost[node][val];
            // cout<<"val"<<cst2<<endl;
            if(val == 1)
            {
                return true;
            }
            if(cycle(val,node))
            return true;
        }
    }
}
int main()
{
    int n,u,v,cst;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>u>>v>>cst;
        sum+=cst;
        vec[u].push_back(v);
        vec[v].push_back(u);
        cost[u][v]=cst;
        cost[v][u]=0;
    }
    bool ans = cycle(1,-1);

    cout<<min(cst2,(sum-cst2))<<endl;
    
    
}