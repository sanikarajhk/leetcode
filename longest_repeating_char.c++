class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int left=0,maxcount=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            int maxi = 0;
 
             for(auto x : mp)
             {
             maxi = max(maxi, x.second);
              }
            while((i-left+1)-maxi>k)
            {
                mp[s[left]]--;
                left++;
            }
            maxcount=max(maxcount,i-left+1);

        }
        return maxcount;
        
    }
};