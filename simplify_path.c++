class Solution {
public:
    string simplifyPath(string path) {
        stack<char> st;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/' && st.empty())
            {
                st.push(path[i]);
                
            }
            
            else if(!st.empty())
            {
                if(path[i]=='/' && st.top()=='/')
                {
                    continue;
                }
                else if(path[i]=='/' && st.top()=='.')
                {
                    st.pop();

                    if(st.top()=='.')
                    {


                        
                        st.pop();
                        if(st.top()=='/')
                        {
                            st.pop();
                            if(!st.empty())
                            {
                            while(st.top()!='/')
                            {
                                st.pop();
                            }
                            }
                            else
                            {
                                st.push('/');
                            }
                        }
                        else 
                        {
                            st.push('.');
                            st.push('.');
                            st.push('/');
                        }
                        



                    }
                    else if(st.top()!='/')
                    {
                        st.push('.');
                        st.push('/');
                    }
                }
                else 
                {
                    st.push(path[i]);
                }

            }




        }
        if( st.top()=='.')
        {
            st.pop();

            if(st.top()=='.')
            {
                        
            st.pop();
            if(st.top()=='/')
            {
            st.pop();
            if(!st.empty())
                {
                    while(st.top()!='/')
                    {
                    st.pop();
                    }
                }
            else
                {
                    st.push('/');
                }
             }
            else 
            {
            st.push('.');
            st.push('.');
            st.push('/');
            }
                        



            }
            else if(st.top()!='/')
            {
                st.push('.');
                st.push('/');
            }

        }
        string d="";
        while(!st.empty())
        {
            d.push_back(st.top());
            st.pop();
        }
        
        reverse(d.begin(),d.end());
        if(d[d.size()-1]=='/')
        {
            d.pop_back();
        }
        if(d.empty())
        {
            return "/";
        }
        return d;

        
    }
};