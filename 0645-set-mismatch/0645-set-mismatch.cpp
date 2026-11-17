class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>1)
            {
              ans.push_back(nums[i]);
              break;
            }
        }
          for(int i=1;i<=nums.size();i++)
          {
            if(m.find(i)==m.end()){
                ans.push_back(i);
                break;
            }
          }
          return ans;
    }
};