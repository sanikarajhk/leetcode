class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
                mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxheap;
        for(auto x:mp)
        {
            maxheap.push({x.second,x.first});
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return ans;


        
    }
};