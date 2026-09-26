class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<pair<double,int>> pq;
        double sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            pq.push({nums[i],i});

        }
        double avg=sum/2;
        int count=0;
        
        while(sum>avg && !pq.empty()){
            double x=pq.top().first;
            int y=pq.top().second;
            pq.pop();
            sum-=x;
            double half=x/2;
            pq.push({half,y});
            sum+=half;
            count++;
            

        }
        return count;
        
    }
};