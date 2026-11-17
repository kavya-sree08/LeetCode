class Solution {
public:
    bool find(map<char,int>&m){
        for(auto it:m){
            if(it.second>0)
            return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(s.size()<t.size())
        return "";
        map<char,int>m;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        int i=0,mini=INT_MAX,st=-1,e=-1;
        string ans="";
        for(int j=0;j<s.size();j++){
            m[s[j]]--;
            if(find(m)){
                while(m[s[i]]++ && find(m))
                i++;
                m[s[i]]--;
                if(mini>(j-i+1)){
                    mini=j-i+1;
                    st=i;
                    e=j;
                }

            }
        }
        if(st!=-1 && e!=-1)
        return s.substr(st,e-st+1);
        return ans;
    }
};