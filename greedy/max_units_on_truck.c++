class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> pq;
        int profit=0;

        for(int i=0;i<boxTypes.size();i++)
        {
            pq.push({boxTypes[i][1],boxTypes[i][0]});
        }
        while(truckSize>0 && !pq.empty())
        {
            if(truckSize>=pq.top().second)
            {
                profit+=(pq.top().first*pq.top().second);
                
                truckSize-=pq.top().second;
                pq.pop();
            }
            else
            {
                profit+=(truckSize*pq.top().first);
                pq.pop();
                truckSize=0;

            }

        }
        return profit;

        
    }
};