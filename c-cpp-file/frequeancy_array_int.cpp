#include <iostream>
using namespace std;



int main()
{
    int n ;
    cin>>n;
     int a[n];
    for(int i =0;i<n;i++ )
    {
        cin>>a[i];
    }
    int maximu =a[0];
    for( int i =0;i<n;i++)
    {
        if(a[i]>maximu) maximu =a[i];

    }
    int n1=maximu+1;
    int *count =new int[n1]{0};

    for( int i =0;i<n;i++)
    {
      int value =a[i];
      count[value]++;

    }

    int maxi_count=0;
    cout<<endl;
    for(int i =0;i<n1;i++)
    {

        if(count[i]>0)
        {
            cout<<i<<" => "<<count[i]<<endl;
        }
    }

    return 0;
}
