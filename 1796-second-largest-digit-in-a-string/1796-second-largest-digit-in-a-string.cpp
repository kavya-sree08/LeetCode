class Solution {
public:
    int secondHighest(string s) {
        vector<int>v(10,0);
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            v[s[i]-'0']=1;
        }
         int ans=-1;
         int i=0;
         int j=9;
         while(i<2 && j>=0)
         {
            if(v[j]!=0)
            i++;
            if(i==2)
            {
            ans=j;
            break;
            }
            
            j--;
         }
         return ans;
    }
};