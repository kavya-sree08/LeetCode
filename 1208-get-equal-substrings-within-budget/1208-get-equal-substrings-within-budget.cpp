class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
     if(s.size()!=t.size())
     return 0;
      int ans=0;
      int i=0,j=0;
      int count=0;
      while(j<s.size())
      {
        if(s[j]!=t[j])
        count+=(abs(s[j]-t[j]));
        while(count>maxCost)
        {
            count-=abs(s[i]-t[i]);
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
      }
      return ans; 
    }
};