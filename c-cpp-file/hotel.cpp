#include <iostream>
using namespace std;

int main()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int rem =n-k;
    if(rem >0)
    {
        int a =n-rem;
         a =a*x;
        rem=rem*y;
        cout<<a+rem;

    }else{

        cout<<n*x;
    }

    return 0;
}
