class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum;
        double maxsum=INT_MIN;

        int n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
      
        sum=prefix[k-1];
        maxsum=max(sum,maxsum);
        for(int i=1;i<=n-k;i++)
        {
            
            sum=prefix[i+k-1]-prefix[i-1];
            maxsum=max(sum,maxsum);
        }
        double avg=maxsum/k;
        return avg;
        
    }
};