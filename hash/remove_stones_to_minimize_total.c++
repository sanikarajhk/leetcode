class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i=0;i<piles.size();i++)
        {
            pq.push(piles[i]);
        }
        while(k>0)
        {
            if(!pq.empty())
            {
                int n=pq.top();
                pq.pop();
                n=n-floor(n/2);
                pq.push(n);
                k--;
            }
        }
        int count=0;
        while(!pq.empty())
        {
            count+=pq.top();
            pq.pop();
        }
        return count;

        
    }
};