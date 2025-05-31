#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pb push_back
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    if(n%2==1)cout<<"YES"<<endl;
    else
    {
      if(n==2)cout<<"NO"<<endl;
      else
      {
        bool flag = false;
        while(n>0)
        {
          n/=2;
          if(n%2==1 && n!=1)
          {
            flag = true;
            //cout<<n<<endl;
            break;
          }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
    }
  }
}
