class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                pq.push(nums[i]);
            }
        }
        int c=0;
        while(!pq.empty())
        {
            int n=pq.top();
            while(!pq.empty())
            {
                pq.pop();
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=n)
                {
                nums[i]=nums[i]-n;
                }
                if(nums[i]!=0)
                {
                    pq.push(nums[i]);
                }
            }
            c++;



        }
        return c;

        
        
    }
};