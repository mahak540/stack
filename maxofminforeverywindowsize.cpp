 vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int windowsize;
        vector<int>res(n,0);
        stack<int>st;
        vector<int>len(n,0);
        
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
        {
            int t=st.top();
            st.pop();
            windowsize=st.empty() ? i : i-st.top()-1;
            len[t]=windowsize;
        }
        st.push(i);
        }
        while(!st.empty())
        {
            int t=st.top();
            st.pop();
            windowsize=st.empty() ? n : n-st.top()-1;
            len[t]=windowsize;
        }
        for(int i=0;i<n;i++)
        {
            windowsize=len[i]-1;
            res[windowsize]=max(res[windowsize],arr[i]);
            
        }
        for(int i=n-2;i>=0;i--)
        res[i]=max(res[i],res[i+1]);
        
        return res;
    }
