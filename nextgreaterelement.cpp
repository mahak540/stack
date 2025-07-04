vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>s;
        vector<int>res(n,-1);
        s.push(arr[n-1]);
        
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && s.top()<=arr[i])
            s.pop();
            if(!s.empty())
            {
               res[i]= s.top();
            }
            s.push(arr[i]);
        }
        return res;
    }
