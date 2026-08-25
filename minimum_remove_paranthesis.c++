class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    mp[i]++;

                }
            }
        }
       while(!st.empty())
       {
        mp[st.top()]++;
        st.pop();
       }
       string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(!mp.count(i))
            {
                s1.push_back(s[i]);
            }
        }
        return s1;
        
    }
};