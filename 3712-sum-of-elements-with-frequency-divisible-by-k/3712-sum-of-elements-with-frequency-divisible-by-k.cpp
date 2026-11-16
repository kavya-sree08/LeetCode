class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto i:m)
        {
            if(i.second%k==0)
            ans+=(i.first)*i.second;
        }
        return ans;
    }
};