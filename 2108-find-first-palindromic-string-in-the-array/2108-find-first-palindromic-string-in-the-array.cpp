class Solution {
public:
    bool check(string s)
    {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string t="";
        for(int i=0;i<words.size();i++)
        {   string s=words[i];
            if(check(s)){
                t=s;
                break;
            }
        }
        return t;
    }
};