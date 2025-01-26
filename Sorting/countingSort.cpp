#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
int main()
{
  int n;
  cin>>n;
  int a[n+10];
  int mx = -1;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(mx<a[i])
    {
      mx = a[i];
    }
  }
  int freq[mx+10]={0};
  for(int i=0;i<n;i++)
  {
    freq[a[i]]++;
  }
  for(int i=1;i<=mx;i++)
  {
    freq[i] = freq[i-1] + freq[i];
  }
  int b[n+10];
  for(int i=n-1;i>=0;i--)
  {
    freq[a[i]] = freq[a[i]] - 1;
    b[freq[a[i]]] = a[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<b[i]<<" ";
  }
}
