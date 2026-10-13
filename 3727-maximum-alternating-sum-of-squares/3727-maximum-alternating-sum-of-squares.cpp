class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    for(int i=0;i<nums.size();i++)
    nums[i]=nums[i]*nums[i];
    sort(nums.begin(),nums.end());
    long long ans=0;
    int n=nums.size();
    int i=0,j=n/2;
    while(i<n/2)
    {
    ans-=nums[i]*1LL;
    i++;
    }
    while(j<n)
    {
        ans+=nums[j]*1LL;
        j++;
    }
    return ans;
    }
};