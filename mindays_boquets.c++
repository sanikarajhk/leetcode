class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=bloomDay[0];
        int high=bloomDay[0];
        int mindays=INT_MAX;
        for(int i=0;i<bloomDay.size();i++)
        {
            low=min(low,bloomDay[i]);
            high=max(high,bloomDay[i]);
        }
        while(low<=high)
        {
            int days=low+(high-low)/2;
            int boqcount=0;
            int count=0;
            for(int i=0;i<bloomDay.size();i++)
            {
                if(bloomDay[i]<=days)
                {
                    count++;
                    if(count==k)
                    {
                    boqcount++;
                    count=0;
                    }

                }
                else
                {
                    count=0;
                }
                
            }
            if(boqcount<m)
            {
                low=days+1;
            }
            else
            {
                mindays=min(mindays,days);
                high=days-1;
            }

        }
        if(mindays==INT_MAX)
        {
            return -1;
        }
        else
        {
        return mindays;
        }
   

        
    }
};