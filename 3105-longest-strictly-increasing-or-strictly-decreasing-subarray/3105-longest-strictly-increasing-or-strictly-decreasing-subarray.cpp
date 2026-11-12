class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int d1=1,j=1,d=1,k=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            j++;
            else
            {
            j=1;
            }
             d1=max(d1,j);
        }
      
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            k++;
            else
            {
           
            k=1;
            }
             d=max(d,k);
        }
         
        return max(d1,d);
    }
};