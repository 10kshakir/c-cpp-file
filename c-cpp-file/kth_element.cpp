#include <iostream>

#include"MYSTACK.h"

using namespace std;

void delete_smaller(Stack<int >&st,int top)
{



}

void delete_kt(Stack<int >&st,int n)
{
    if(n==1)
    {
        return;
    }
    int top =st.return_top();
    st.pop();
    n--;
    delete_kt(st,n);
    delete_smaller(st,top);
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

    int d ;
    cin>>d;
    delete_kt(st,d+1);

     while(!st.check_empty())
    {
        cout<<st.pop()<<" ";
    }

    return 0;

}
