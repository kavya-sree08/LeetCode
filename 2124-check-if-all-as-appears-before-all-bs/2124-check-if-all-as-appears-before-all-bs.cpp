class Solution {
public:
    bool checkString(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                if(m.find('b')!=m.end())
                return false;
            }
            m[s[i]]++;
        }
        return true;
    }
};