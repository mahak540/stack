MyStack{
  int *arr;
int cap;
int top;
MyStack(int c

{
  cap=c;
  arr=new int[cap];
  top=-1;
}
void push(int x)
{
  top++;
arr[top]=x;
}
int pop()
{
  int res=arr[top];
top--;
return res;
}
int peek(){
  return arr[top];
}
int size()
{
  return (top+1);
}
bool isEmpty()
{
  return (top==-1);
}
};
  
