class Solution {
public:
    bool check(unordered_map<int,int>& f, int freq)
    {
        return f[freq] == 1;
    }

    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        unordered_map<int, int> f;

        for(auto i : m)
            f[i.second]++;

        for(int i = 0; i < nums.size(); i++)
        {
            if(check(f, m[nums[i]]))
                return nums[i];
        }

        return -1;
    }
};