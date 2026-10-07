class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i=0;
    map<char,int>m;
    int maxi=0;
    for(int j=0;j<s.size();j++)
    {
        while(m[s[j]])
        {
            m[s[i]]--;
            i++;
        }
        m[s[j]]++;
        maxi=max(maxi,j-i+1);

    }
    return maxi;
    }
};