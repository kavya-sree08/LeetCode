class Solution {
public:
    string replaceDigits(string s) {
      string ans="";
      for(int i=0;i<s.size();i++)
      {
        if(isalpha(s[i]))
        ans.push_back(s[i]);
        else
        ans.push_back(s[i]+(s[i-1]-'0'));
      }  
      return ans;
    }
};