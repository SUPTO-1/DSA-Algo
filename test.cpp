#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
int main(){
  int n;
  cin>>n;
  vi nums;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    nums.push_back(x);
  }
  int cnt=0;
        int index;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                cnt++;
                index = i;
            }
        }
        if(cnt==0)cout<<"true"<<endl;
        else if(cnt==1)
        {
            int max = nums[0];
            for(int i=index+1;i<nums.size();i++)
            {
                if(nums[i]>max)
                {
                    cout<<"False";
                }
            }
            cout<<"true";
        }
        else cout<<"False";
   }
