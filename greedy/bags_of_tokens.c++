class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int left=0;
        int right=tokens.size()-1;
        int score=0;
        int ans=0;
        while(left<=right)
        {
            if(power>=tokens[left])
            {
                score++;
                power-=tokens[left];
                left++;
                ans=max(ans,score);
            }
            else if(score>0)
            {
                score--;
                power+=tokens[right];
                right--;
            }
            else 
            {
                break;
            }
        }
        return ans;
        
    }
};