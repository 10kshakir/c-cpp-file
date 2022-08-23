#include<iostream>
#include"queue.h"

using namespace std;

int main()
{
    Queue<char> t;
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        char a;
        cin>>a;
        t.push(a);
    }
    cout<<endl<<t.return_front()<<endl<<t.return_back();
    return 0;
}
