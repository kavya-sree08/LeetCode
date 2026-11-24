class Solution {
public:
    int maxLength(vector<int>& nums) {
        
        int ans=0;
        
        for (int i = 0; i < nums.size(); i++) {
            long long lans = 1;
            long long gans = 0;
            long long prod = 1;

            for (int j = i; j < nums.size(); j++) {

                long long g = gcd(gans, (long long)nums[j]);
                long long l = lans / gcd(lans, (long long)nums[j]);

                if (l > LLONG_MAX / nums[j])
                    break;

                lans = l * nums[j];
                gans = g;

                if (prod > LLONG_MAX / nums[j])
                    break;

                prod *= nums[j];

                if (prod / gans == lans && prod % gans == 0)
                    ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};