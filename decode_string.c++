class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string sub="";
                if(!st.empty()){
                while(st.top()!='[')
                {
                    sub.push_back(st.top());
                    st.pop();
                }
                }
                reverse(sub.begin(),sub.end());
                st.pop();
                
                string ans;
                if(!st.empty()){
                if(isdigit(st.top()))
                {
                    string num="";
                    
                    while(!st.empty() && isdigit(st.top()))
                    {
                        num.push_back(st.top());
                        st.pop();

                    }
                    
                    reverse(num.begin(),num.end());
                    ans="";
                    int n=stoi(num);
                    
                    for(int i=0;i<n;i++)
                    {
                        ans+=sub;

                    }
                    for(int i=0;i<ans.size();i++)
                    {
                        st.push(ans[i]);
                    }

                }
                }

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