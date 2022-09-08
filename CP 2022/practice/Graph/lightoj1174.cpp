#include<bits/stdc++.h>
using namespace std;
vector<int>vec[105];
int visited[110];
int cst[110];
int cst2[110];
int maxi;
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int val = q.front();
        q.pop();
        visited[val]=1;
        for (int i = 0; i < vec[val].size(); i++)
        {
            int val2 = vec[val][i];
            if(!visited[val2])
            {
                q.push(val2);
                visited[val2]=1;
                cst[val2]=cst[val]+1;

            }
        }
        
    }
}
void bfs2(int dest)
{
    queue<int>q;
    q.push(dest);
    while(!q.empty())
    {
        int val = q.front();
        q.pop();
        visited[val]=1;
        for (int i = 0; i < vec[val].size(); i++)
        {
            int val2 = vec[val][i];
            if(!visited[val2])
            {
                q.push(val2);
                visited[val2]=1;
                cst2[val2]=cst2[val]+1;
                
                maxi = max(maxi,(cst[val2]+cst2[val2]));

            }
        }
        
    }
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     int casee=0;
     while(t--)
     {
        memset(cst,0,sizeof(cst));
        memset(cst2,0,sizeof(cst2));
        memset(visited,0,sizeof(visited));
        maxi=0;
        int n,e,a,b;
        cin>>n>>e;
        for (int i = 0; i < e; i++)
        {
            /* code */
            cin>>a>>b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        int source,dest;
        cin>>source>>dest;
        bfs(source);
        memset(visited,0,sizeof(visited));
        maxi = cst[dest];
        bfs2(dest);
        
        cout<<"Case "<<++casee<<": "<<maxi<<endl;
        for (int i = 0; i <= n; i++)
        {
            vec[i].clear();
            /* code */
        }
        

     }
}