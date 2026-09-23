class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        for(int i=0;i<gifts.size();i++)
        {
            pq.push(gifts[i]);
        }
        for(int i=0;i<k;i++)
        {
            if(!pq.empty())
            {
            long long n=pq.top();
            long long m=sqrt(n);
            pq.pop();
            pq.push(m);
            }

        }
        long long ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};