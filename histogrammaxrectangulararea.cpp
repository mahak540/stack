int getMaxArea(vector<int> &arr) {
        // Your code here
        int res=0;
        int n=arr.size();
        stack<int>s;
        int width,curr,t;
        
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                t=s.top();
                s.pop();
                width=s.empty()?i:i-s.top()-1;
                res=max(res,arr[t]*width);
            }
            s.push(i);
        }
        while(!s.empty())
        {
            t=s.top();
            s.pop();
            curr=arr[t]*(s.empty()?n:n-s.top()-1);
            res=max(res,curr);
        }
        return res;
    }
