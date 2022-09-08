#include<bits/stdc++.h>
#include<map>
using namespace std;
map<int,bool>vis;
int main()
{
    int n;
    int casee=0;
    while(1)
    {
        cin>>n;
        if(n==0)
          break;
        
        map<int,vector<int> >v;

        for (int i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            vis[a]=false;
            vis[b]=false;
        }
        int cnt = 0;
        while(1)
        {
            int c,d;
            cin>>c>>d;

            if(c==0 && d==0)
                break;
            
            
            map<int,int>dis;
            queue<int>q;
            q.push(c);
            vis[c]=true;
            dis[c]=0;
            while(!q.empty())
            {
                
                int node = q.front();
                q.pop();
                if(dis[node]==d)
                    break;
                
                for (int i = 0; i < v[node].size(); i++)
                {
                    int chld = v[node][i];
                    if(!vis[chld]){
                        dis[chld] = dis[node]+1;
                        vis[chld]=true;
                        q.push(chld);
                        // nodeCount++;
                    }
                    /* code */
                }  
            }
            map<int,bool>::iterator itr;
            int notReach = 0;
            for (itr = vis.begin(); itr != vis.end() ; itr++)
            {
                if(itr->second == false)
                {
                    notReach++;
                    // cout<<itr->first<<endl;
                }
            }
            
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++casee, notReach,c, d);
            for(map<int,bool>::iterator iter = vis.begin(); iter != vis.end(); iter++)
                    vis[iter->first] = false;

        }
        vis.clear();
        
    }
}