#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10000];
int main()
{
  int n,e;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  for(int i=1;i<=n;i++)
  {
    cout<<i<<" : ";
    for(int j=0;j<graph[i].size();j++)
    {
      cout<<graph[i][j]<<" ";
    }
    cout<<endl;
  }
}
