vector<int> previousElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>s;
        vector<int>res(n,-1);
        s.push(arr[0]);
        
        for(int i=1;i<n;i++)
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
