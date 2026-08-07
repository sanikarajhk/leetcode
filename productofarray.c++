class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left;
        vector<int> right(n);
        int sum;
        left.push_back(1);
        for(int i=1;i<nums.size();i++)
        {
            sum=nums[i-1]*left[i-1];
            left.push_back(sum);
        }
        right[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            right[i]=nums[i+1]*right[i+1];

        }
        for(int i=0;i<n;i++)
        {
            nums[i]=left[i]*right[i];
        }
        return nums;


        
    }
};