#include<iostream>
#include"MYSTACK.h"

using namespace std;
Stack<int> sortStack(Stack<int> &input)
{
    Stack<int> tmpStack;

    while (!input.check_empty())
    {

        int tmp =input.pop();



        while (!tmpStack.check_empty() && tmpStack.return_top() < tmp)
        {

            input.push(tmpStack.pop());

        }


        tmpStack.push(tmp);
    }

    return tmpStack;
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
