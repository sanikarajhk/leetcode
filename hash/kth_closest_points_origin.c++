class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, vector<int>>,vector<pair<int, vector<int>>>,greater<pair<int, vector<int>>>> minheap;
        for(auto x: points)
        {
            int i=0;
            int j=1;
            int dis= x[0] * x[0] + x[1] * x[1];
            minheap.push({dis,x});
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(minheap.top().second);
            minheap.pop();

        }
        return ans;


        
    }
};