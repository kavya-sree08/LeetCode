class Solution {
public:
void generate(int n,vector<string>&v,string &temp,int o,int c)
{
    if(temp.size()==n*2)
    {
        v.push_back(temp);
        return;
    }
    if(o<n)
    {
        temp+='(';
        generate(n,v,temp,o+1,c);
        temp.pop_back();
    }
    if(c<o)
    {
        temp+=')';
        generate(n,v,temp,o,c+1);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        string temp="";
        generate(n,v,temp,0,0);
        return v;
    }
};