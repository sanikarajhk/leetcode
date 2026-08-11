class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxnum=INT_MIN;
        int sum=0;
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while((i-left+1)-sum>k)
            {
                sum=sum-nums[left];
                left++;
            }
            maxnum=max(maxnum,i-left+1);
        }
        return maxnum;


        
    }
};