#include <bits/stdc++.h>
using namespace std;
#define FasterIO                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int cont[1005], visited[1005];
vector<int> vec[1005];
void bfs(int val)
{
    memset(visited, 0, sizeof(visited));
    queue<int> q;
    q.push(val);
    visited[val] = 1;
    cont[val]++;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < vec[u].size(); i++)
        {
            if (!visited[vec[u][i]])
            {
                visited[vec[u][i]] = 1;
                cont[vec[u][i]]++;
                q.push(vec[u][i]);
            }
        }
    }
}
int main()
{
    FasterIO;
    int t;
    int cs = 0;
    cin >> t;
    while (t--)
    {
        memset(cont, 0, sizeof(cont));
        int n, k, m;
        cin >> k >> n >> m;
        int ar[n + 5];

        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }
        int u, v;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            vec[u].push_back(v);
        }
        for (int i = 0; i < k; i++)
        {
            bfs(ar[i]);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (cont[i] == k)
                cnt++;
        }

        cout << "Case " << ++cs << ": " << cnt << endl;
        for (int i = 0; i <= n; i++)
        {
            vec[i].clear();
            visited[i] = 0;
        }
    }
}