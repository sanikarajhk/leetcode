class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int left=0,maxcount=INT_MIN;
        for(int i=0;i<fruits.size();i++)
        {
            mp[fruits[i]]++;
            while(mp.size()>2)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0) mp.erase(fruits[left]);
                left++;
            }
            int sum=0;
            for(auto x:mp)
            {
                sum+=x.second;
            }
            maxcount=max(maxcount,sum);
        }
        return maxcount;
        
    }
};