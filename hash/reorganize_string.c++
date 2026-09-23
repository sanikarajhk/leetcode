class Solution {
public:
    string reorganizeString(string s) {
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
        string s1="";
        while(!pq.empty())
        {
            queue<pair<int,char>> q;
            for(int i=0;i<=1;i++)
            {
                if(!pq.empty())
                {
                    int n=pq.top().first;
                    char c=pq.top().second;
                    pq.pop();
                    n--;
                    s1=s1+c;
                    if(n>0)
                    {
                        q.push({n,c});
                    }
                }
                else
                {
                    break;
                }
            }
            while(!q.empty())
            {
                int n=q.front().first;
                char c=q.front().second;
                q.pop();
                pq.push({n,c});


            }

        }
        for(int i=1;i<s1.size();i++)
        {
            if(s1[i]==s1[i-1])
            {
                return "";
            }
        }
        return s1;



        
    }
};