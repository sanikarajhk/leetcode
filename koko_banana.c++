class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=1;   
        for(int i=0;i<piles.size();i++)
        {
            high=max(high,piles[i]);
        }
        int mink;
        while(low<=high)
        {
            long long total=0;

            long long k=low+(high-low)/2;
            for(int i=0;i<piles.size();i++)
            {
                total+=(piles[i]+k-1)/k;

            }
             if(total<=h)
             {
                mink=k;
                high=k-1;
                
             }
             else
             {
                
                low=k+1;
             }


        }
        return mink;
        
    }
};