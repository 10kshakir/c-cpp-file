#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;

    int a[size];

    for(int  i =0;i<size;i++)
    {
        cin>>a[i];
    }

    int sum =0;

    for(int i=0;i<size;i+=2)
    {
        sum+=a[i];
    }

    cout<<sum;

    return 0;
}
