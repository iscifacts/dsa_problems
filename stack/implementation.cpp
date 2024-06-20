#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int d)
    {
        if(top==size)
        cout<<"Stack Overflow"<<endl;
        else
        {
            top++;
            arr[top]=d;
        }
    }
    void pop(){
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if(top==-1)
        {
            return -1;
        }
        else
        return arr[top];
    }
    bool isempty()
    {
        if(top==-1)
        return true;
        else
        return false;
    }
};
int main()
{
    stack st(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
  //  st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isempty()<<endl;

    return 0;
}