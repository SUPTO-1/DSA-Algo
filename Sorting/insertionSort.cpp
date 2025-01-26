#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }
  for(int i=1;i<n;i++)
  {
    int target = a[i];
    int j = i-1;
    while(j>=0 && a[j]>target)
    {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = target;
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
