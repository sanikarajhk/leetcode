class MinStack {
public:
    stack<pair<int,int>> st;
    int mini;
    

    MinStack() {
    


        
    }
    
    void push(int value) {
        if(st.empty())
        {
            mini=value;
        }
        else
        {
        mini=min(value,mini);
        }
        st.push({value,mini});

        
    }
    
    void pop() {
        st.pop();
        if(st.empty())
        {
            mini=INT_MAX;
        }
        else
        {
            mini=st.top().second;

        }

        
    }
    
    int top() {
        return st.top().first;
        
    }
    
    int getMin() {
        return st.top().second;
        
        
    }
};