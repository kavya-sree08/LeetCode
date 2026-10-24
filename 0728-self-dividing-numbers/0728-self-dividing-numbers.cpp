class Solution {
public:
   bool check(string s,int n)
   {
    int t=stoi(s);
    while(t)
    {
        int re=t%10;
        t/=10;
        if(re==0)
        return false;
        if(n%re!=0)
        return false;
    }
    return true;
   }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            string s=to_string(i);
            if(check(s,i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};