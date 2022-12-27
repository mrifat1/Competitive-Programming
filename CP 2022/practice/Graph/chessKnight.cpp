#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int sx, sy, ex, ey;
int x, y, n, i, j, k,t;
int vis[50][50];
int dist[50][50];
queue<int> X, Y;
void chessKnight(int x, int y) {
    int dx[] = {1,1,-1,-1,2,2,-2,-2};
    int dy[] = {2,-2,2,-2,1,-1,1,-1};
    int tx, ty;
    for(i = 0; i < 8; i++) {
        tx = x+dx[i], ty = y+dy[i];
        if(tx <= 0 || ty <= 0 || tx > 8 || ty > 8)
            continue;
        if(vis[tx][ty])
            continue;
        if(dist[tx][ty] == 0) {
            dist[tx][ty] = dist[x][y]+1;
            X.push(tx), Y.push(ty);
        }
    }
}
int bfs() {
    memset(dist, 0, sizeof(dist));
    if(sx == ex && sy == ey)
        return -1;
    
    X.push(sx), Y.push(sy);

    while(!X.empty()) {
        x = X.front(), X.pop();
        y = Y.front(), Y.pop();
        chessKnight(x, y);    
    }
    return dist[ex][ey];
}
int main() {
    unordered_map<char,int>unmp;
       unmp['a']=1;
       unmp['b']=2;
       unmp['c']=3;
       unmp['d']=4;
       unmp['e']=5;
       unmp['f']=6;
       unmp['g']=7;
       unmp['h']=8;
       unmp['1']=1;
       unmp['2']=2;
       unmp['3']=3;
       unmp['4']=4;
       unmp['5']=5;
       unmp['6']=6;
       unmp['7']=7;
       unmp['8']=8;
       int tst = 0;
    while(1) {
        string s,ss,sss;
        cin>>n;
        if(n==-1)
        break;
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            cin>>s;
            vis[unmp[s[0]]][unmp[s[1]]] = 1;
        }
        cin>>ss>>sss;
        sx = unmp[ss[0]];
        sy = unmp[ss[1]];
        ex = unmp[sss[0]];
        ey = unmp[sss[1]];
        int res = bfs();
        if(res == -1)
            printf("Board %d: %d moves\n",++tst, 0);
        if(res == 0)
            printf("Board %d: not reachable\n",++tst);
        else
            printf("Board %d: %d moves\n",++tst, dist[ex][ey]);
    }
    return 0;
}