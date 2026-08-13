class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int cursum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            maxi=max(maxi,cursum);
            if(cursum<0)
            {
                cursum=0;
            }
        }
        cursum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            mini=min(mini,cursum);
            if(cursum>0)
            {
                cursum=0;
            }
        }
        int res=max(maxi,abs(mini));
        return res;

        
    }
};