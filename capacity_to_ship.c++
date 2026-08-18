class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=weights[0];
        int high=0;
        int kmin;
        for(int i=0;i<weights.size();i++)
        {
            high+=weights[i];
            low=max(low,weights[i]);
            
        }
        while(low<=high)
        {
            
            int k=low+(high-low)/2;
            int m=1;
            int target=0;
            for(int i=0;i<weights.size();i++)
            {
                if(target+weights[i]>k)
                {
                    target=0;
                    m++;
                }
                target+=weights[i];
   
            
            }
            if(m<=days)
            {
                kmin=k;
                high=k-1;
            }
            else
            {
                low=k+1;
            }

        }
        return kmin;

        
    }
};