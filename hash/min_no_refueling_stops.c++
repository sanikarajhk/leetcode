class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(target<=startFuel) return 0;
        priority_queue<int> pq;
        int count=0;
        int prev=0;
        
        
        int prevPos = 0;

        for(int i = 0; i < stations.size(); i++)
        {
        int current = stations[i][0];
        stations[i][0] = current - prevPos;
        prevPos = current;
        } 
        for(int i=0;i<stations.size();i++)
        {
            
            int x=stations[i][0];
            int y=stations[i][1];
            while(startFuel<x)
            {
                if(pq.empty())
                { return -1;
                }
                else
                {
                    startFuel+=pq.top();
                    pq.pop();
                    count++;
                }
            }
            startFuel-=x;
            prev+=x;
            pq.push(y);
            
        }
        while(startFuel<target-prev)
        {
            
                if(pq.empty())
                { return -1;
                }
                else
                {

                    startFuel+=pq.top();
                    pq.pop();
                    count++;
                   
                }

        }
        
   
        return count;
       
        
        
    }
};