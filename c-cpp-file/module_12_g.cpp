#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int original =n;
    int reversed =0;


    while(n!=0)
    {
        int remainder =n%10;
        reversed =(reversed*10)+remainder;
        n/=10;
    }

    if(original==reversed)
    {
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
