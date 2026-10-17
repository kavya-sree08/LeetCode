class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> v = nums;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        sort(v.begin(), v.end(), [&](int a, int b) {
            if (digitSum(a) == digitSum(b))
                return a < b;
            return digitSum(a) < digitSum(b);
        });

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != v[i]) {
                ans++;
                int j = mp[v[i]];

                mp[nums[i]] = j;
                mp[v[i]] = i;

                swap(nums[i], nums[j]);
            }
        }

        return ans;
    }
};