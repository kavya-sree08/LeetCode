class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>m;
        for(string &word:words)
        {
            m[word]++;
        }
        int ans=0;
        bool flag=true;
        for(int i=0;i<words.size();i++)
        {
            string rev=words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]!=rev)
            {
                if(m[words[i]]>0 && m[rev]>0)
                {
                    ans+=4;
                    m[words[i]]--;
                    m[rev]--;
                }
            }
            else
            {
                if(m[words[i]]>=2)
                {
                    ans+=4;
                    m[words[i]]-=2;
                }
                else if(m[words[i]]>=1 && flag)
                {
                    ans+=2;
                    m[words[i]]--;
                    flag=false;
                }
            }
        }
        return ans;
    }
};