class Solution {
public:
    int passwordStrength(string password) {
        set<char>s(password.begin(),password.end());
        int ans=0;
        for(auto it=s.begin();it!=s.end();it++)
        {
            char ch=*it;
            if(ch>='a' && ch<='z')
            ans+=1;
            else if(ch>='A' && ch<='Z')
            ans+=2;
            else if(ch>='0' && ch<='9')
            ans+=3;
            else 
            ans+=5;

        }
        return ans;
    }
};