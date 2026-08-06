class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];

        }
        for(int i=0;i<n;i++)
        {
            int left;
            if(i==0)
            {
             left=0;
            }
            else
            {
                left=prefix[i-1];
            }
            int right=prefix[n-1]-prefix[i];
            if(left==right)
            {
                return i;
            }
        
        }
        return -1;
        
    }
};