class Solution {
public:
    bool canAliceWin(int n) {
       if(n<10)
       return 0;
       int ans=0;
       int num=10;
       while(n>=num)
       {
         n-=num;
         ans++;
         num--;
       }
       if(ans%2==0)
       return false;
       return true;
    }
};