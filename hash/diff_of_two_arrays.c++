class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        unordered_map<int,int> omp1;
        
        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;

        }
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;

        }
        omp1=mp1;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<nums1.size();i++)
        {
            if(!mp2.count(nums1[i]) && mp1[nums1[i]]==1)
            {
                v1.push_back(nums1[i]);
                
            }
            if(mp1.count(nums1[i]))
            {
                mp1[nums1[i]]--;
                if(mp1[nums1[i]]==0)
                {
                    mp1.erase(nums1[i]);
                }
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(!omp1.count(nums2[i]) && mp2[nums2[i]]==1)
            {
                v2.push_back(nums2[i]);
    
            }
            if(mp2.count(nums2[i]))
            {
                mp2[nums2[i]]--;
                if(mp2[nums2[i]]==0)
                {
                    mp2.erase(nums2[i]);
                }
            }

        }
        answer.push_back(v1);
        answer.push_back(v2);
        return answer;











        
    }
};