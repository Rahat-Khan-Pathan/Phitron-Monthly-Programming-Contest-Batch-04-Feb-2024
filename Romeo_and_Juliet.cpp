// Problem Setter - Rahat Khan Pathan
// Solution - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int dis[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : v[p])
        {
            if (!vis[c])
            {
                vis[c] = true;
                dis[c] = dis[p] + 1;
                q.push(c);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int x, y, k;
    cin >> x >> y >> k;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(x);
    // cout << dis[y] << endl;
    if (dis[y] != -1 && dis[y] <= (k * 2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}