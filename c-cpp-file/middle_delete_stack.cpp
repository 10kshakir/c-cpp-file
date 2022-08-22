#include <iostream>

#include"MYSTACK.h"

using namespace std;

void middle_delete(Stack<int>&st,int n)
{

    if(n==1)
    {
        st.pop();
        return;
    }


    int top =st.return_top();
    st.pop();
    n--;
    middle_delete(st,n);
    st.push(top);
}

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
    int n;
    cin>>n;
    Stack<int >st;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        st.push(a);
    }

    int d =(n/2)+1;
    reverse_stack(st);
    middle_delete(st,d);

    cout<<d<<endl;
     while(!st.check_empty())
    {
        cout<<st.pop()<<" ";
    }

    return 0;
}
