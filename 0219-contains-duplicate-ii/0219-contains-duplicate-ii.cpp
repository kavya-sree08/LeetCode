class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<k && i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            return true;
            m[nums[i]]++;
        }
        int i=0;
        for(int j=k;j<nums.size();j++)
        {
            if(abs(i-j)>k){
            m[nums[i]]--;
            if(m[nums[i]]==0)
            m.erase(nums[i]);
            i++;
            }
            if(m.find(nums[j])!=m.end())
            return true;
            m[nums[j]]++;
        }
        return false;
        
    }
};