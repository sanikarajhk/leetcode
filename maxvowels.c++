class Solution {
public:
    int maxVowels(string s, int k) {
        int maxnum=0;
        int n=s.length();
        vector<int> prefix(n);
        if(s[0]=='a'|| s[0]=='e'|| s[0]=='i'|| s[0]=='o'|| s[0]=='u')
        {
            prefix[0]=1;
        }
        else
        {
            prefix[0]=0;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
            {
                prefix[i]=prefix[i-1]+1;
            }
            else
            {
                prefix[i]=prefix[i-1];
            }
            
        }
        int sum=prefix[k-1];
        maxnum=max(maxnum,sum);
        for(int i=1;i<=n-k;i++)
        {
            sum=prefix[i+k-1]-prefix[i-1];
            maxnum=max(maxnum,sum);

        }
        return maxnum;


        
    }
};