#include <iostream>

using namespace std;
int main()
{

    int n =3;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int maximum = a[0];

    for(int i =0;i<n;i++)
    {
        if(a[i]>maximum) maximum =a[i];
    }
    int sum=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]!=maximum)
        {
            sum+=a[i];
        }
    }
    if(sum>maximum)
    {
        cout<<maximum;
    }else{
        cout<<-1;
    }
    return 0;
}
