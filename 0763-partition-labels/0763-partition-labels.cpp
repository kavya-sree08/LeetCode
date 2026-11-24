class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]=i;
        }
        vector<int>ans;
        int i=0,j=i,end=0;
        while(j<s.size())
        {
          char ch=s[j];
          end=m[ch];
          while(j<s.size() && j<=end)
          {
            end=max(end,m[s[j]]);
            j++;
          }
          ans.push_back(j-i);
          i=j;
        }
        return ans;
    }
};