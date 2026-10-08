class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> arr;
        int prev;
        int n=newInterval[0];
        int m=newInterval[1];

        
        int i;
        if(intervals.size()==0)
        {
            arr.push_back({n,m});
            return arr;
        }

        for(i=0;i<intervals.size();i++)
        {
            prev=intervals[i][1];
            if(n>prev)
            {
                arr.push_back({intervals[i][0],intervals[i][1]});
            }
            else if(intervals[i][0]>m)
            {
                break;
            }
            else
            {
                n=min(n,intervals[i][0]);
                m=max(m,intervals[i][1]);
            }
                

                
        }
        arr.push_back({n,m});
            

        
        while(i<intervals.size())
        {
            arr.push_back({intervals[i][0],intervals[i][1]});
            i++;
            
        }
        return arr;


        
    }
};