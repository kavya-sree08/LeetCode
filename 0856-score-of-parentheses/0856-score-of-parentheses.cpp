class Solution {
public:
    int scoreOfParentheses(string s) {
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            c++;
            else{
               c--;
               if(s[i-1]=='(')
               ans+=pow(2,c);
            }
        }
        return ans;
    }
};