class Solution {
public:
    string truncateSentence(string s, int k) {
        string st="";
        int c=k;
        for(int i=0;i<s.size() && c>0;i++)
        {    if(s[i]==' ')
            c--;
            if(c>0)
            st+=s[i];
        
        }
        return st;
    }
};