#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,a,b,level[1000],visited[1000],no,s,x;;


    while(cin>>n)
    {
        if(n==0)
            break;
     cin>>e;
     vector<int>v[1000];
     for(int i=0;i<e;i++)
     {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
     }
     memset(level,0,sizeof(level));
     no=0;
     level[0]=1;

     queue<int>q;
     q.push(0);

    while(!q.empty())
    {
        s=q.front();
        q.pop();

        for(int i=0;i<v[s].size();i++)
        {
            x=v[s][i];
            if(level[x]==0)
            {
                level[x]=level[s]+1;
                q.push(x);
            }
            else
            {
                if(level[x]==level[s])
                {
                     no=1;
                     break;
                }
            }
        }
        if(no==1)
            break;
    }
    if(no==1)
        cout<<"NOT BICOLORABLE."<<endl;
    else
        cout<<"BICOLORABLE."<<endl;

    }

}
