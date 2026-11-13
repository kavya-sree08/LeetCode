class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>s;
        for(int i=0;i<nums2.size();i++)
        m[nums2[i]]=-1;
        for(int i=0;i<nums2.size();i++)
        {
            while(!s.empty())
            {
                if(nums2[i]>s.top())
                {
                    m[s.top()]=nums2[i];
                    s.pop();
                }
                else
                break;
            }
            s.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        ans.push_back(m[nums1[i]]);
        return ans;
    }
};