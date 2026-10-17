class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;
        int l=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
            else
            {
                l++;
            }
            if(r==l)
            {
                count++;
                r=0;
                l=0;

            }
        }
        return count;
        
    }
};