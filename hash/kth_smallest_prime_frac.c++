class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<tuple<double,int,int>,vector<tuple<double,int,int>>,greater<tuple<double,int,int>>> pq;
        vector<int> ans;

        
        int j=arr.size()-1;
        for(int i=0;i<arr.size() && i<k;i++)
        {
            pq.push({(double)arr[i]/arr[j],i,j});
        }
        while(!pq.empty())
        {
            auto [frac,i,j]=pq.top();
            pq.pop();
            k--;
            
            if(k==0)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break;
            }
           
            
            if(j-1>i)
            {
                pq.push({(double)arr[i]/arr[j-1],i,j-1});

            }
            

            

        }
        return ans;




        
    }
};