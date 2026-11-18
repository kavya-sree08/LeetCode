class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int p=0,s=0;
        for(int i=0;i<nums.size();i++)
        s+=nums[i];
        for(int i=0;i<nums.size();i++){
            int pp=p;
            p+=nums[i];
            if(s-p==pp)
            return i;
        }
        return -1;
    }
};