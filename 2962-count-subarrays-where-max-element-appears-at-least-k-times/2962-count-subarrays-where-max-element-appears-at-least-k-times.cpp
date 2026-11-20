class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0;
        int m=*max_element(nums.begin(),nums.end());
        int i=0,j=0;
        int c=0;
        while(j<nums.size())
        {
           if(nums[j]==m)
           c++;
           while(i<=j && c>=k)
           {
             ans+=nums.size()-j;
             if(m==nums[i])
              c--;
             i++;
           }
            j++;
        }
        return ans;
    }
};