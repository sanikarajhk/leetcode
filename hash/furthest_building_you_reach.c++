class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int i=1;
       
        while(i<heights.size())
        {
         
           
            if(heights[i]>heights[i-1])
            {
                
                pq.push(heights[i]-heights[i-1]);

              
            }
          
            if(pq.size()>ladders)
            {
                bricks=bricks-pq.top();
                pq.pop();
               
                    
            }

            
            if(bricks<0)
            {
                return i-1;
            }
            i++;

        }
       
        return heights.size()-1;

        
    }
};