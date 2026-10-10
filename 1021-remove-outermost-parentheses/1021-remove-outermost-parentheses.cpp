class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(c>0)
                st.push(s[i]);
                c++;
            }
            else
            {   
                c--;
                if(c>0)
                {
                    st.push(s[i]);
                }
            }
        }
        string t="";
        while(!st.empty())
        {
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};