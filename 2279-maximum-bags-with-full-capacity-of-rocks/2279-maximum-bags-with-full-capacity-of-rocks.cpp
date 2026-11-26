class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>v(rocks.size());
        for(int i=0;i<rocks.size();i++)
        {
            v[i]=abs(capacity[i]-rocks[i]);
        }
        sort(v.begin(),v.end());
        int i=0;
        while( i<v.size() && additionalRocks>=v[i] )
        {
           
           additionalRocks-=v[i];
           v[i]=0;
           i++;
           
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            ans++;
        }
        return ans;
    }
};