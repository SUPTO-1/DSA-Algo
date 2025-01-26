class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>tmp;
        tmp = nums1;
        int i=0,j=0;
        int size = 0;
        while(i<m && j<n)
        {
            if(tmp[i]<=nums2[j])
            {
                nums1[size++] = tmp[i++];
            }
            else
            {
                nums1[size++] = nums2[j++];
            }
        }
        while(i<m)nums1[size++] = tmp[i++];
        while(j<n)nums1[size++] = nums2[j++];
    }
};
