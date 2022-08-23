#include<iostream>
#include<stack>
#include"queue.h"


using namespace std;
void reverse_queue(Queue<int>&d)
{
    stack <int> st;
    while(!d.empty())
    {
        st.push(d.pop());
    }
    while(!st.empty())
    {
        d.push(st.top());
        st.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    Queue<int > q;
    while(n--)
    {
        int a;
        cin>>a;
        q.push(a);
    }

    reverse_queue(q);
    cout<<endl;
    while(!q.empty())
    {
        cout<<q.pop()<<endl;
    }
    return 0;
}
