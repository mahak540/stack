class Solution {
    private:
    stack<pair<int,int>>st;
  public:
  
    Solution() {
        // code here
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        int newmin=st.empty() ? x : min(x,st.top().second);
         st.push({x,newmin});
    }
    // Remove the top element from the Stack
        
    void pop() {
        if(!st.empty()){
        st.pop();
        }
    }

        
    // Returns top element of the Stack
    int peek() {
        if(st.empty())
        {
            return -1;
        }
        int top=st.top().first;
        return top;
    }
        

    // Finds minimum element of Stack
    int getMin() {
        if(st.empty())
        {
            return -1;
        }
        int mn=st.top().second;
        return mn;
    }
};
