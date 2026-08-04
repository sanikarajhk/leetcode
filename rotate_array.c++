class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()!=1)
        {
        stack<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.push(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=s.top();
            s.pop();
        }
        for(int i=0;i<(k%nums.size());i++)
        {
            s.push(nums[i]);
        }
        for(int i=0;i<(k%nums.size());i++)
        {
            nums[i]=s.top();
            s.pop();
        }
        for(int i=(k%nums.size());i<nums.size();i++)
        {
            s.push(nums[i]);
        }
        for(int i=(k%nums.size());i<nums.size();i++)
        {
            nums[i]=s.top();
            s.pop();
        }
        }
    }
};