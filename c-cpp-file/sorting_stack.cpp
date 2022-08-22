#include <iostream>

#include"MYSTACK.h"

void sorting(Stack<int>&st,int top)
{
    int t =st.return_top();
    if(st.check_empty())
    {
        st.push(top);
        return;
    }
    if(top<t)
    {
        st.push(top);
        return;
    }


        int temp;
        temp=st.pop();
        sorting(st,top);
        st.push(temp);



}

void sort_stack(Stack<int>&st)
{
    if(st.check_empty())
    {
        return;
    }
    int top =st.return_top();
    st.pop();

    sort_stack(st);
    sorting(st,top);

}

using namespace std;
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

    sort_stack(st);
   while(!st.check_empty())
   {
        cout<<st.pop()<<" ";
   }

    return 0;
}
