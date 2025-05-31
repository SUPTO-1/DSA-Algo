#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pb push_back
int main()
{
  ll n;
  cin>>n;
  vi a;
  ll raj = 0 , rak = 0;
  for(int i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    a.pb(x);
  }
  ll l=0,r=n-1;
  bool cnt = true;
  while(l<=r)
  {
    int sum = 0;
    if(a[l]>a[r])
    {
      sum+=a[l];
      l++;
    }
    else
    {
      sum+=a[r];
      r--;
    }
    if(cnt==true)
    {
      raj+=sum;
      cnt = 0;
    }
    else
    {
      rak+=sum;
      cnt=1;
    }
  }
  if(raj>rak)
  {
    cout<<raj-rak<<" Rajib"<<endl;
  }
  else if(rak>raj)
  {
    cout<<rak-raj<<" Rakib"<<endl;
  }
  else
  {
    cout<<0<<" Both Chocolates are same"<<endl;
  }
}
