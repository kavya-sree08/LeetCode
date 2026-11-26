class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        for(int i=0;i<tasks.size();i++)
        {
            m[tasks[i]]++;
        }
        int ans=0;
        for(auto i:m)
        {
            if(i.second==1)
            return -1;
            else if(i.second%3==0)
            ans+=(i.second/3);
            else
            ans+=(i.second/3)+1;
        }
        return ans;
    }
};