class Solution {
public:
    int minOperations(string s) {
        if(is_sorted(s.begin(),s.end()))
        return 0;
        if(s.size()==2)
        return -1;
        int mi=*min_element(s.begin(),s.end());
        int ma=*max_element(s.begin(),s.end());
        if(s[0]==mi || s[s.size()-1]==ma)
        return 1;
        for(int i=1;i<s.size()-1;i++)
        {
            if(s[i]==mi || s[i]==ma)
            return 2;
        }
        return 3;
    }
};