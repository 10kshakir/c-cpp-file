#include <iostream>
#include"queue.h"


using namespace std;

int freq_queue(Queue <int> &q,int k)
{

    int count =0;
    Queue <int >d;
    while(!q.empty())
    {
        int a =q.pop();
        if(k==a)
        {
            count++;
        }
        d.push(a);

    }
    while(!d.empty())
    {
        q.push(d.pop());
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    Queue <int >d;
    while(n--)
    {
        int a;
        cin>>a;
        d.push(a);
    }
    int k;
    cin>>k;

    for(int i =0;i<k;i++)
    {
        int a ;
        cin>>a;
        int chk =freq_queue(d,a);
        if(chk==0)
        {
            cout<<-1<<endl;
        }else{
            cout<<chk<<endl;
        }
    }
    return 0;
}
