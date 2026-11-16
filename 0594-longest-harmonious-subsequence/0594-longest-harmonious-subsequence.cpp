class Solution {
public:
    int findLHS(vector<int>& nums) {
       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++)
       m[nums[i]]++;
       int ans=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
        if(m[nums[i]-1]>0)
        ans=max(ans,m[nums[i]]+m[nums[i]-1]);
        if(m[nums[i]+1]>0)
        ans=max(ans,m[nums[i]]+m[nums[i]+1]);
       }
       return ans==INT_MIN?0:ans;
    }
};