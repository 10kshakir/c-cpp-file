#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue <int,vector<int>,greater<int>> p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }

    return 0;
}
