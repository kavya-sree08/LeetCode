class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0,prev=neededTime[0];
        char ch=colors[0];
        for(int i=1;i<colors.size();i++)
        {
          if(colors[i]==ch)
          {
            ch=colors[i];
            ans+=min(prev,neededTime[i]);
            prev=max(neededTime[i],prev);
            
          }
          else
          {
            ch=colors[i];
            prev=neededTime[i];
          }
        }
        return ans;
    }
};