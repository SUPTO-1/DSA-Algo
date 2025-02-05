#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
int main()
{
  int n;
  cin>>n;
  vi a;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }
  int target;
  cin>>target;
  sort(a.begin(),a.end());
  int left = 0 , right = n-1;
  bool flag = false;
  while(left<right)
  {
    int ans = a[left] + a[right];
    if(ans==target)
    {
      flag = true;
      break;
    }
    else if(ans>target)
    {
      right--;
    }
    else left++;
  }
  if(flag==true)
  {
    cout<<a[left]<<" "<<a[right]<<endl;
  }
  else
  cout<<"Not Found"<<endl;
}
