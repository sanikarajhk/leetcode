class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int c=0;
        sort(trips.begin(),trips.end(),[](vector<int>& a,vector<int>& b){
            return a[1]<b[1];
        });
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int prev=trips[0][2];
        c+=trips[0][0];
        pq.push({trips[0][2],trips[0][0]});
        if(c>capacity) return false;
        for(int i=1;i<trips.size();i++)
        {
             
            while(!pq.empty() && pq.top().first<=trips[i][1])
            {
                c-=pq.top().second;
                pq.pop();


            }

           
                c+=trips[i][0];
                if(c>capacity)
            {
                return false;
            }
            
           
            prev=trips[i][2];
            pq.push({trips[i][2],trips[i][0]});




        }
        return true;


        
    }
};