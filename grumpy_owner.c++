class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int maxwin=INT_MIN;
        int sum=0;
        int n=customers.size();
        vector<int> prefix(n);
        if(grumpy[0]==0)
        {
        prefix[0]=0;
        }
        else
        {
            prefix[0]=customers[0];
        }
        for(int i=1;i<n;i++)
        {
            if(grumpy[i]==1)
            {
                prefix[i]=prefix[i-1]+customers[i];
            }
            else
            {
                prefix[i]=prefix[i-1];
            }
        }
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0) 
            {
                sum+=customers[i];
            }
        }
        int win=prefix[minutes-1];
        maxwin=max(maxwin,win);
        for(int i=1;i<=n-minutes;i++)
        {
            win=prefix[i+minutes-1]-prefix[i-1];
            maxwin=max(maxwin,win);
        }
        return sum+maxwin;

        
    }
};