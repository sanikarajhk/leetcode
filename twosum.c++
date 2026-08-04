class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            int n=target-nums[i];
            if(mp.count(n))
            {
                arr.push_back(i);
                arr.push_back(mp[n]);
                break;
            }
            mp[nums[i]]=i;
        }
        return arr;


    }
};