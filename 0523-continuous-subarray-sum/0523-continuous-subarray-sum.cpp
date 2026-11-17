class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++)
        nums[i]+=nums[i-1];
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            int rem=nums[i]%k;
            if(m.find(rem)!=m.end() && i-m[rem]>=2)
            return true;
            if(m.find(rem)==m.end())
              m[rem]=i;
        }
        return false;
    }
};