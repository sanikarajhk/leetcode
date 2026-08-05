class NumArray {
public:
    vector<int> prefixsum;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefixsum.resize(n + 1);
        prefixsum[0]=0;
        prefixsum[1]=nums[0];

        
        
        for(int i=2;i<nums.size();i++)
        {
            prefixsum[i]=prefixsum[i-1]+nums[i-1];
        }
        
        prefixsum[n]=prefixsum[n-1]+nums[n-1];  
    }
    
    int sumRange(int left, int right) {
        
        int sum=prefixsum[right+1]-prefixsum[left];
        return sum;

        
    }
};