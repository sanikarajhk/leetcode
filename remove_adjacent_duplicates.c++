class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string s1="";
        
      
            for(int i=0;i<s.size();i++)
            {
                if(st.empty())
                {
                    st.push(s[i]);
                }
                else
                {
                    if(st.top()==s[i])
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
            }
            while(!st.empty())
            {
                s1.push_back(st.top());
                st.pop();

            }
            reverse(s1.begin(),s1.end());


           
            return s1;

        

        
    }
};