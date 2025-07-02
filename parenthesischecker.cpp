 bool check(char c1, char c2)
  {
      if(c1=='(' && c2==')')
      return true;
      if(c1=='[' && c2==']')
      return true;
      if(c1=='{' && c2=='}')
      return true;
      
      return false;
  }
    bool isBalanced(string& k) {
        // code here
        int top=-1;
        for(int i=0;i<k.length();++i){
            if(top<0 || !check(k[top],k[i]))
            {
                ++top;
                k[top]=k[i];
                
                
            }
            else
            {
                --top;
            }
        }
        return top==-1;
        
    }
