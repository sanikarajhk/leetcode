class Solution {
public:
    bool canJump(vector<int>& nums) {
        int furthest=0;
        priority_queue<int> pq;
        pq.push(0);
        vector<int> arr;

        for(int i=0;i<nums.size();i++)
        {
            
            if(!pq.empty() && pq.top()<i)
            {
                return false;

            } 
            else if(pq.top()>=nums.size())
            {
                return true;
            }

            furthest=i+nums[i];
            pq.push(furthest);

        }
        
        return true;

        
    }
};