class Solution {
public:
    int arrangeCoins(int n) {
        long long low=1;
        long long high=n;
        while(low<=high)
        {
            
            long long mid=low+(high-low)/2;
            long long k=(mid*(mid+1))/2;
            if(k>n)
            {
                high=mid-1;
            }
            else if(k<n)
            {
                low=mid+1;
            }
            else
            {
                return mid;
            }

        }
        return high;

        
    }
};