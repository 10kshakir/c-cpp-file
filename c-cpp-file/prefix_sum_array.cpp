#include <iostream>

using namespace std;

int main()
{
    int n =5;
    int a[]={1,2,3,4,5};
    int pre[n];
    pre[0]=a[0];
    for(int i =1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    for(int i =0;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}
