#include <iostream>

#include"MYSTACK.h"

using namespace std;
void delete_stack_element(Stack<int>&st,int n)
{

    if(n==1)
    {
        st.pop();
        return;
    }


    int top =st.return_top();
    st.pop();
    n--;
    delete_stack_element(st,n);
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
    int a[n];
    Stack <int> st;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        st.push(a[i]);
    }
    reverse_stack(st);
    int d ;
    cin>>d;
    int i =0;
    while(i<d)
    {
        if(a[i]<a[d])
        {
            delete_stack_element(st,i);

        }
        i++;
    }



     while(!st.check_empty())
    {
        cout<<st.pop()<<" ";
    }
    return 0;
}
