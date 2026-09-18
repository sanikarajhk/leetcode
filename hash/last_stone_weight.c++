class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==0) return 0;
        priority_queue<int> maxheap;
        for(int i=0;i<stones.size();i++)
        {
            maxheap.push(stones[i]);
        }
        int n=0;
        int m=0;
        bool done=false;
        while(!maxheap.empty())
        {
         n=maxheap.top();
        maxheap.pop();
        done=true;
        if(!maxheap.empty())
        {
        m=maxheap.top();
        maxheap.pop();
        done=false;
        
        if(n!=m )
        {
            maxheap.push(n-m);
            
        }
        }
        }
        if(stones.size()==1) return maxheap.top();
        if(!done && n==m) return 0;
        return n;

        
    }
};