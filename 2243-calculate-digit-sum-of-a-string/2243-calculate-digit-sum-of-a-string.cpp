class Solution {
public:
    string digitSum(string s, int k) {
       if(s.size()<=k)
       return s;
       string st=s;
       while(st.size()>k)
       {
        int m=0;
        string sm="";
        int sum=0;
        for(int i=0;i<st.size();i++)
        { 
            sum+=(st[i]-'0');
             m++;
            if(m==k)
            {
            sm+=(to_string(sum));
            sum=0;
            m=0;
            }
           
        }
        if(m>0)
        sm+=(to_string(sum));
        st=sm;
       }
       return st;
    }
};