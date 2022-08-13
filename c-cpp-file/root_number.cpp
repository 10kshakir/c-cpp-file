#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int main()
{
    int n;
    cin>>n;
    int i =0;
    int a =pow(2,i);
    while(a<n)
    {
       if(pow(2,i)>n) break;
       a=pow(2,i);
       i++;


    }
    cout<<a;

    return 0;
}
