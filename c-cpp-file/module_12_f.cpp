#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count =0;
    if(a!=b)count++;
    if(b!=c)count++;
    if(a!=c)count++;
    if(count!=0)cout<<count;
    else cout<<1;
    return 0;
}
