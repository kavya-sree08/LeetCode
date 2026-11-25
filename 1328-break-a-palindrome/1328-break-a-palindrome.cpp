class Solution {
public:
    string breakPalindrome(string p) {
        if(p.size()==1)
        return "";
        bool flag=true;
    
        
        
        for(int i=0;i<p.size()/2;i++)
        {
            if(p[i]!='a')
            {
                p[i]='a';
                flag =false;
                break;
                
            }
        }
        
        if(flag)
        p[p.size()-1]='b';
        return p;
        }
};