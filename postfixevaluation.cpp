 int evaluate(vector<string>& arr) {
        // code here
        stack<int>s;
        for(string token : arr)
        {
            if(isdigit(token[0]) || (token.size()>1 && token[0]=='-'))
            {
                s.push(stoi(token));
            }
            else
            {
                int t1=s.top();
                s.pop();
                int t2=s.top();
                s.pop();
                if(token =="+")
                {
                    s.push(t2+t1);
                }
                else if(token=="-")
                {
                    s.push(t2-t1);
                }
                else if(token=="*")
                {
                    s.push(t2*t1);
                }
                else if(token=="/")
                {
                    s.push(t2/t1);
                }
            }
        }
        return s.top();
    }
