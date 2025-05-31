#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pb push_back
int main()
{
  ll n,q;
  cin>>n>>q;
  vi a;
  for(int i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    a.pb(x);
  }
  // vi prefixSum;
  // prefixSum.pb(0);
  // for(int i=0;i<n;i++)
  // {
  //   prefixSum.pb(prefixSum[i]+a[i]);
  // }
  while(q--)
  {
    ll target;
    cin>>target;
    ll cnt = 0;
    int j=0;
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      while(sum>target)
      {
        sum-=a[j];
        j++;
      }
      if(sum == target)cnt++;
    }
    cout<<cnt<<endl;
  }
}
