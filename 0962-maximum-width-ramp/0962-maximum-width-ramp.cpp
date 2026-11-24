class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int>p(nums.size(),nums[nums.size()-1]);

        for(int i=nums.size()-2;i>=0;i--)
        {
         p[i]=max(p[i+1],nums[i]);
        }
        int i=0,j=0;
        int ans=0;
        while(j<nums.size())
        {
            while(i<j && nums[i]>p[j])
            {
                i++;
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};