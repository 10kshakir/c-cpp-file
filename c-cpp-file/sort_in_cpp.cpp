#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int a[]={7,5,8,1,3,2,4,6};
    int n =8;
    sort(a,a+n);
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
