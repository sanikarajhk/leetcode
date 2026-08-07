class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minsum=INT_MAX;
        int n=blocks.length();
        vector<int> prefix(n);
        if(blocks[0]=='W')
        {
            prefix[0]=1;
        }
        else
        {
            prefix[0]=0;
        }
        
        for(int i=1;i<n;i++)
        {
            if(blocks[i]=='W')
            {
                prefix[i]=prefix[i-1]+1;
            }
            else
            {
                prefix[i]=prefix[i-1];
            }
        }
        int sum=prefix[k-1];
        minsum=min(minsum,sum);
        for(int i=1;i<=n-k;i++)
        {
            sum=prefix[i+k-1]-prefix[i-1];
            minsum=min(minsum,sum);

        }
        return minsum;

        
    }
};