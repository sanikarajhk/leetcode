class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int low=0;
        int high=nums.size()-1;
        
        int i=-1,j=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(target>nums[mid])
                low=mid+1;

            else if(target<nums[mid])
                high=mid-1;

            else
            {
                i=mid;
                high=mid-1;
            }
        }
    
        low=0;
        high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(target>nums[mid])
                low=mid+1;

            else if(target<nums[mid])
                high=mid-1;

            else
            {
                j=mid;
                low=mid+1;
            }
        }


        arr.push_back(i);
        arr.push_back(j);
        return arr;

        
    }
};