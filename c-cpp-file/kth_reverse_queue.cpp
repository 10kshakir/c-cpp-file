#include<iostream>
#include"queue.h"
#include"MYSTACK.h"
using namespace std;

void kth_reverse_queue(Queue<int>&q,int k)
{
    Stack<int> st;
    Queue<int >q1;
    while(k--)
    {
        int a =q.pop();
        st.push(a);

    }
    while(!q.empty())
    {
        int a =q.pop();
        q1.push(a);
    }
    while(!st.check_empty())
    {
        q.push(st.pop());
    }
    while(!q1.empty())
    {
        q.push(q1.pop());
    }


}

int main()
{
    int n;
    Queue<int> q;
    cin>>n;
    int d ;
    cin>>d;
    while(n--)
    {
        int a;
        cin>>a;
        q.push(a);
    }
   kth_reverse_queue(q,d);

    while(!q.empty())
    {
        cout<<q.pop()<<" ";
    }
    return 0;
}
