class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(s[i]);
            }

        }
        string s1="";
        while(!st.empty())
        {
            s1.push_back(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;

        
    }
};