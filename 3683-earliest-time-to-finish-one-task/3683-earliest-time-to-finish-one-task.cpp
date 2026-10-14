class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(int i=0;i<tasks.size();i++)
        {
            int curr=tasks[i][0]+tasks[i][1];
            ans=min(ans,curr);
        }
        return ans;
    }
};