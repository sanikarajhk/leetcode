class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> arr(prices.size());
        arr[0]=0;
        for(int i=1;i<prices.size();i++)
        {
            arr[i]=max(0,prices[i]-prices[i-1]);

        }
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];

        }
        return sum;
        
        
    }
};