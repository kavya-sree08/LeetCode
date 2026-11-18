class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        for(int i=1;i<nums.size();i++)
        nums[i]+=nums[i-1];
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i]-k)!=m.end())
            ans+=m[nums[i]-k];
            m[nums[i]]++;
        }
        return ans;
    }
};