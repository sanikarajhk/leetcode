class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxnum=INT_MIN;
        int sum=0;
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while((i-left+1)-sum>1)
            {
                sum=sum-nums[left];
                left++;
            }
            maxnum=max(maxnum,i-left+1);
        }
        return maxnum-1;
        
    }
};