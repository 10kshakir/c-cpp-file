#include <iostream>
using namespace std;
bool check_a(int a[],int n)
{
    for(int i =0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<check_a(a,n);
    return 0;
}
