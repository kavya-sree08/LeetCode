class Solution {
public:
    int partitionString(string s) {
        set<char>se;
        int ans=1;
        for(int i=0;i<s.size();i++)
        {
            if(se.find(s[i])!=se.end())
            {
                ans++;
                se.clear();
            }
            se.insert(s[i]);

        }
        return ans;
    }
};