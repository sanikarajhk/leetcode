class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        s.erase();
        
        while(!pq.empty())
        {
            int n=pq.top().first;
            char m=pq.top().second;
            for(int i=0;i<n;i++)
            {
                s+=m;
            }
            pq.pop();
        }
        return s;
        
    }
};