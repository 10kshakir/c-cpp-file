#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue <int> q;
    priority_queue<int> q1;
    q.push(21);
    q1.push(21);
    q.push(33);
    q1.push(33);
    q.pop();
    q1.pop();
    q.push(12);
    q1.push(12);
    q.push(21);
    q1.push(21);
    cout<<"queue" <<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"priority_queue" <<endl;
     while(!q1.empty())
    {
        cout<<q1.top()<<endl;
        q1.pop();
    }
    return 0;
}
