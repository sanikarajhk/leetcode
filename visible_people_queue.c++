class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<pair<int,int>> st;
        vector<int> arr(heights.size(),0);
        st.push({heights.size()-1,0});
        if(heights.size()>1)
        {
        st.push({heights.size()-2,1});
        for(int i=heights.size()-3;i>=0;i--)
        {
            int count=1;

            while(!st.empty() && heights[st.top().first]<heights[i])
            {
                
                arr[st.top().first]=st.top().second;
                int m=heights[st.top().first];
                st.pop();
                if(!st.empty() && heights[st.top().first]<m)
                {
                    break;


                }
                else
                {
                    count++;
                }
                

               
            }
            if(st.empty())
                {
                    count--;
                }
           
            st.push({i,count});
            
        }
        }
        while(!st.empty())
        {
            arr[st.top().first]=st.top().second;
            st.pop();

        }
        
        return arr;


        

        
    }
};