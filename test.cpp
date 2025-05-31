

/* Coded by : SUPTO1
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
//#define vector< pair <int,int> > vp;
//#define make_pair mp
#define forc(n) for(int i=0;i<n;i++)
#define forn(n) for(int i=1;i<=n;i++)
#define fort(t) for(int i=1;i<=t;i++)
typedef vector<long long> vii;
typedef pair<ll, ll> pll;
#define ull unsigned __int64
typedef vector < int > vi;
#define pi 3.1415926535897
#define gcd __gcd
#define optimize()            \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
#define endl '\n'
const double PI = acos(-1.0);
double toradians(double degree)
{
    return (degree*PI/180.0);
}
double todegree(double radian)
{
    if(radian<0)radian+=2*PI;
    return(radian*180.0/PI);
}
//ull binarytodecimal(string s){string t=s;ull number;number = strtoull (t.c_str (),NULL,2);return number;}
void check(vi a,ll n)
{
    forn(n)cout<<a[i];
}
void subset(int arr[],int n)
{
    for(int mask=1; mask<pow(2,n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if(mask & (1 << i))
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   string s;
   cin>>s;
   int len = s.length();
   char ch = s[len-1];
   int n;
   cin>>n;
   int cnt = 0;
   map<char,int>mp;
   vector<string>st;
   for(int i=1;i<=n;i++)
   {
       string t;
       cin>>t;
       mp[t[0]]++;
       if(t[0]==ch)
       {
           cnt++;
           st.pb(t);
       }
   }
   if(cnt==0)cout<<"?"<<endl;
   else
   {
       bool flag = false;
       string ans="0";
       for(int i=0;i<st.size();i++)
       {
           int len = st[i].length();
           if(mp[st[i][len-1]]==0)
           {
               ans = st[i];
               flag=true;
               break;
           }
           else if(mp[st[i][len-1]]==1 && st[i][0] == st[i][len-1])
           {
               ans = st[i];
               flag = true;
               break;
           }
       }
       if(flag==false)cout<<st[0]<<endl;
       else cout<<ans<<"!"<<endl;
   }


    return 0;
}
