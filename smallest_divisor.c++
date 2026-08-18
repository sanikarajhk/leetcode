class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=nums[0];
        int mink;
        for(int i=0;i<nums.size();i++)
        {
            
            high=max(high,nums[i]);
        }
        while(low<=high)
        {
            int target=0;
            int k=low+(high-low)/2;
            for(int i=0;i<nums.size();i++)
            {
                target+=(nums[i]+k-1)/k;
            }
            if(target<=threshold)
            {
                mink=k;
                high=k-1;
            }
            else
            {
                low=k+1;
            }

        }
        return mink;
    }
    

};