class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxi=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,score=0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                score++;
                power-=tokens[i];
                i++;
                
                maxi=max(maxi,score);
            }
            else if(score>=1)
            {
                power+=tokens[j];
                score--;
                j--;
            }
            else
            return maxi;
        }
        return maxi;
    }
};