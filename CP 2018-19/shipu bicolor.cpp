/******************************************************************
***   Problem Setter: Miguel Revilla                            ***
***   Uva Problem No: 10004                                     ***
***   Problem Name  : Bicoloring                                ***
***   Type          : Graph theory,BFS,DFS,Bipartite graphs     ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <queue>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

#define pf printf
#define pb push_back
#define sii(t) scanf("%d",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define cover(a,d) memset(a,d,sizeof(a))

int main()
{

    int n,e,p;
    while(sii(n))
    {

        if(n==0)
        break;
        sii(e);
        vector<int>ed[100000];
        int color[10000];
        cover(color,-1);

        for(int i=0;i<e;i++)
        {
            int x,y;
            ssii(x,y);
            ed[x].pb(y);
            ed[y].pb(x);
        }

        queue<int>work;
        int f=0;
        color[0]=0;
        work.push(0);

        while(!work.empty())
        {
            p=work.front();
            work.pop();
            int vsize=ed[p].size();
            for(int i=0;i<vsize;i++)
            {
                if(color[ed[p][i]]==-1)
                {
                    if(color[p]==0)
                     color[ed[p][i]]=1;
                    else
                    color[ed[p][i]]=0;
                     work.push(ed[p][i]);
                }
                else
                {
                    if(color[ed[p][i]]==color[p]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        pf("NOT BICOLORABLE.n");
        else
        pf("BICOLORABLE.n");
    }

    return 0;
}
