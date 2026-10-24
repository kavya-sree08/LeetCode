class Solution {
public:
   bool check(int t,int n)
   {
   
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
            
            if(check(i,i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};