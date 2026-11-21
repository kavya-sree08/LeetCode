class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
       vector<string>ans;
       stringstream ss(s1);
       string word;
       while(ss>>word)
       m[word]++;
       stringstream ss1(s2);
       while(ss1>>word)
       m[word]++;
       for(auto i:m)
       {
        if(i.second==1)
        ans.push_back(i.first);
       }
       return ans;
    }
};