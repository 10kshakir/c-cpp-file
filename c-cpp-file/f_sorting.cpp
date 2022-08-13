#include <iostream>
#include <algorithm>


using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum =0;
    int len =n-1;
    while(d!=0)
    {
       sum +=a[len];
       len--;
       d--;
    }
    cout<<sum;

    return 0;
}
