#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int> graph[N];
int vis[N];
int dis[N];
void dfs(int u, int depth)
{
  vis[u] = 1;
  dis[u] = depth;
  for(auto v : graph[u])
  {
    if(!vis[v])
    {
      dfs(v, depth + 1);
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;
  for(int i = 1; i <= e; i++)
  {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  memset(vis, 0, sizeof(vis));
  dfs(1, 0);
  for(int i = 1; i <= n; i++)
  {
    cout << i << " : " << dis[i] << endl;
  }
}
