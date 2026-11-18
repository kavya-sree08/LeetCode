class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>v(nums.size(),-1);
        if(nums.size()<2*k+1)
        return v;
        if(k==0)
        return nums;
        int left=0,right=2*k,ind=k;
        long long sum=0;
         for(int i=left;i<=right;i++)
         {
              sum+=nums[i];
         }
        v[ind]=sum/(right-left+1);
        ind++;
        right++;
        while(right<nums.size())
        {
            sum-=nums[left];
            sum+=nums[right];
            
            left++;

             v[ind]=sum/(right-left+1);
             right++;
            ind++;
        }
        return v;
    }
};