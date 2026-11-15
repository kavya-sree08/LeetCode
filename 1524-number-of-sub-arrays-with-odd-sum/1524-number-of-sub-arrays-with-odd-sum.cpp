class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int o=0,e=0,ans=0,s=0,m=1000000007;
        for(int i=0;i<arr.size();i++){
             s+=arr[i];
            if(s%2==1){
                ans++;
                ans=(e+ans)%m;
                o++;
            }
            else{
                ans=(o+ans)%m;
                e++;
            }
           
        }
        return ans;
    }
};