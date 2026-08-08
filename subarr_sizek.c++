class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int n=arr.size();
        vector<int> prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+arr[i];
        }
        int sum=prefix[k-1];
        if(sum/k>=threshold)
        {
            count++;
        }

        for(int i=1;i<=n-k;i++)
        {
            sum=prefix[i+k-1]-prefix[i-1];
            if(sum/k>=threshold)
            {
            count++;
            }

        }
        return count;
    }
};