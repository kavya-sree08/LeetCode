class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        while(!m.empty()){
            vector<int>a;
            for(auto it = m.begin(); it != m.end();) {
                a.push_back(it->first);
                it->second--;

                if(it->second == 0)
                    it = m.erase(it);
                else
                    it++;
            }
            ans.push_back(a);
        }
        return ans;
    }
};