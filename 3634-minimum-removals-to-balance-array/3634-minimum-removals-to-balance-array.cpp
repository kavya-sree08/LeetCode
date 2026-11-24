class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int ans=0;
        int mini=0,maxi=0;
        int i=0,j=0;
        sort(nums.begin(),nums.end());
        while(j<nums.size())
        {
            mini=nums[i];
            maxi=nums[j];
            if(maxi<=1LL*mini*k)
            {
                ans=max(ans,j-i+1);
            }
            else if(maxi>mini*k)
            {
                i++;
            }
            j++;
        }
        return nums.size()-ans;
    }
};