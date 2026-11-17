class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c++;
        }
        ans=max(ans,c);
        for(int i=k;i<s.size();i++)
        {
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
            c--;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c++;
            ans=max(ans,c);
        }
        return ans;
    }
};