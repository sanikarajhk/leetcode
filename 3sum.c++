class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size()-1;k++)
        {
            int i=k+1;
            int j=nums.size()-1;
            if(k>0 && nums[k]==nums[k-1]) continue;
            while(i<j)
            {
                int sum=nums[i]+nums[k]+nums[j];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    i++;
                    j--;
                    while(i<j && nums[i]==nums[i-1])
                    {
                        i++;
                    }
                    while(i<j && nums[j]==nums[j+1])
                    {
                        j--;
                    }

                }
                else if(sum<0)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }

        }
        return ans;

        
    }
};