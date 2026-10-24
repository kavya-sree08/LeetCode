class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++)
        total+=nums[i];
        int single=0;
        for(int i=0;i<nums.size();i++)
        {
            string s=to_string(nums[i]);
            if(s.size()==1)
            single+=nums[i];
        }
        int d=total-single;
        if(single>d || d>single)
        return true;
        return false;
    }
};