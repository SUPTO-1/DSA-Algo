#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int>graph[N];
int vis[N];
int dis[N];
void bfs(int src)
{
  queue<int>q;
  memset(vis,0,sizeof(vis));
  q.push(src);
  vis[src] = 1;
  dis[src] = 0;
  while(!q.empty())
  {
    int u = q.front();
    q.pop();
    for(auto v:graph[u])
    {
      if(vis[v]!=1)
      {
        vis[v] = 1;
        dis[v] = dis[u] + 1;
        q.push(v);
      }
    }
  }
}
int main()
{
  int n,e;
  cin>>n>>e;
  for(int i=1;i<=e;i++)
  {
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  bfs(1);
  for(int i=1;i<=n;i++)
  {
    cout<<i<<" : "<<dis[i]<<endl;
  }
}
