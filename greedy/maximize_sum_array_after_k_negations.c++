class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
       
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++)
        {
            
            pq.push({nums[i],i});
        }
        
        while(k>0)
        {
            
                int i=pq.top().second;
                int n=pq.top().first;
                pq.pop();
                nums[i]=-n;
                pq.push({nums[i],i});
                k--;
        }

        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

        }
        return sum;
    }

        
    
};