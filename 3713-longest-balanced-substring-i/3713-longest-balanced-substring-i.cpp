class Solution {
public:
bool check(vector<int>&v)
{
    int a=0;
    for(int i=0;i<v.size();i++)
    {   if(v[i]==0)
    continue;
        if(a==0)
        a=v[i];
        else if(a!=v[i])
        return false;
    }
    return true;
}
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        { vector<int>v(26,0);
        for(int j=i;j<s.size();j++)
        {
            v[s[j]-'a']++;
            if(check(v))
            ans=max(ans,j-i+1);
        }
        }
        return ans;
    }
};