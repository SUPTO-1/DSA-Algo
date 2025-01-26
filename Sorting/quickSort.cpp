#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
int partition(vi &a,int l,int h)
{
  int i=l,j=h;
  int pivot = a[l];
  while(i<j)
  {
    while(a[i]<=pivot)i++;
    while(a[j]>pivot)j--;
    if(i<j)swap(a[i],a[j]);
  }
  swap(a[l],a[j]);
  return j;
}
void quickSort(vi &a,int l ,int h)
{
  int j;
  if(l<h)
  {
    j = partition(a,l,h);
    quickSort(a,l,j-1);
    quickSort(a,j+1,h);
  }
}
int main()
{
  int n;
  cin>>n;
  vi a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  quickSort(a,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
