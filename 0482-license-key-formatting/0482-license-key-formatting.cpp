class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string st="";
        int c=0;
        string ans="";
        for(int i=s.size()-1;i>=0;i--)
        {   if(s[i]=='-')
        continue;
            ans+=toupper(s[i]);
            c++;
            if(c==k && i!=0)
            {
                ans+='-';
                c=0;
            }
        }   
         if (!ans.empty() && ans.back() == '-')
            ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;     
    }
};