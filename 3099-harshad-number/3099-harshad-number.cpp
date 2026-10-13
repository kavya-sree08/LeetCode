class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans=0;
        int num=x;
        while(num)
        {
            int rem=num%10;
            num/=10;
            ans+=rem;
        }
        if(x%ans==0)
        return ans;
        return -1;
    }
};