#include <iostream>

#include"MYSTACK.h"

using namespace std;

void insert_at_bottom(Stack<int>&st,int bottom)
{
    if(st.check_empty())
    {
        st.push(bottom);
        return;
    }
    int top =st.return_top();
    st.pop();
    insert_at_bottom(st,bottom);
    st.push(top);
}


void reverse_stack(Stack<int>&st)
{
    if(st.check_empty())
    {
        return;
    }
    int top =st.return_top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st,top);

}

int main()
{
    Stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse_stack(st);

    while(!st.check_empty())
    {
        cout<<st.pop()<<endl;
    }


    return 0;
}
