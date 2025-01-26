#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
void merge(vi &a,int l,int mid,int h)
{
  int sizeOfLeft = mid - l + 1;
  int sizeOfRight = h - mid;
  int left[sizeOfLeft+10] , right[sizeOfRight+10];
  for(int i=0;i<sizeOfLeft;i++)
  {
    left[i] = a[l+i];
  }
  for(int i=0;i<sizeOfRight;i++)
  {
    right[i] = a[mid+1+i];
  }
  int i=0,j=0,k=l;
  while(i<sizeOfLeft && j<sizeOfRight)
  {
    if(left[i]<right[j])
    {
      a[k++] = left[i++];
    }
    else a[k++] = right[j++];
  }
  while(i<sizeOfLeft)a[k++] = left[i++];
  while(j<sizeOfRight)a[k++] = right[j++];
}
void mergeSort(vi &a,int l,int h)
{
  if(l<h)
  {
    int mid = (l + h) / 2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    merge(a,l,mid,h);
  }
}
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
  mergeSort(a,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
