class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j;
        
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]!=j)
            {
                break;
            }
        }
        return j;
        
    }
};