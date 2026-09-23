class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int n=pq.top();
        pq.pop();
        int m=pq.top();
        return (n-1)*(m-1);


        
    }
};