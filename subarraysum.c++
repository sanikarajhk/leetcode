class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
 
        
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> prefixsum(n);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            int m=prefixsum[i]-k;
            if(mp.count(m))
            {
                count+=mp[m];
            }
            mp[prefixsum[i]]++;
        
            
        }
        
        return count;

        
    }
};