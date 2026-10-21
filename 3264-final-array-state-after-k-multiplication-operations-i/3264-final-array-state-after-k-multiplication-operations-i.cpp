class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=k;i>0;i--)
        {
            int m=*min_element(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==m)
                {
                nums[i]=nums[i]*multiplier;
                break;
                }
            }
        }
           return nums;
    }
};