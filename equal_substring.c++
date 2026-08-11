class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int maxlen=0;
        int diff;
        int left=0;
        int cost=0;
        for(int i=0;i<s.size();i++)
        {
            diff=abs(t[i]-s[i]);
            cost=cost+diff;
            while(cost>maxCost)
            {
                diff=abs(t[left]-s[left]);
                cost=cost-diff;
                left++;
            }
            maxlen=max(maxlen,i-left+1);

        }
        return maxlen;


        
    }
};