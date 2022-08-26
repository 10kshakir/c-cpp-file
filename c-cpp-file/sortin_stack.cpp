#include<iostream>
#include"MYSTACK.h"

using namespace std;
Stack<int> sortStack(Stack<int> &input)
{
    Stack<int> st;
    while(!input.check_empty())
    {
        int a = input.pop();
        while(!st.check_empty()&&st.return_top()<a)
        {
            input.push(st.pop());
        }
        st.push(a);
    }
    return st;
}
int main()
{
    int n;
    Stack <int > st;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        st.push(a);
    }
    st =sortStack(st);

    while(!st.check_empty())
    {
        cout<<st.pop()<<endl;
    }
    return 0;
}
