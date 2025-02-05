class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min = 100000;
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            int left = i+1;
            int right = nums.size() - 1;
            while(left<right)
            {
                int tmp = nums[i] + nums[left] + nums[right];
                int diff = abs(target - tmp);
                if(tmp==target)
                {
                    return tmp;
                }
                else if(tmp<target)
                {
                    left++;
                }
                else right--;
                if(min>diff)
                {
                    min = diff;
                    ans = tmp;
                }
            }
        }
        return ans;

    }
};
