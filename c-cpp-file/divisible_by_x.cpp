#include<iostream>
using namespace std;

int main()
{
    long long a, b, x;
    cin>>a>>b>>x;

    long long count=b/x;

    if(a%x == 0)
    {
        count= count-a/x;
        count++;
    }
    else
    {
        count= count-a/x;
    }

    cout<<count<<endl;
}
