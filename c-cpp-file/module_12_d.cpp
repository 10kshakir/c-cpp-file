#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int l;
    cin>>l;
    while(l--)
    {
        int n ;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++ )
        {
             cin>>a[i];
        }
        sort(a,a+n);
        int maximu =a[0];
        for( int i =0;i<n;i++)
        {
            if(a[i]>maximu) maximu =a[i];

        }
        int n1=maximu+1;
        int count [n1];
        for( int  i=0;i<n1;i++)
        {
            count[i]=0;
        }
        for( int i =0;i<n;i++)
        {
          int value =a[i];
          count[value]++;

        }

        int maxi_count=0;
        for(int i =0;i<n1;i++)
        {
            if(count[i]>0)maxi_count=max(maxi_count,count[i]);
        }

        cout<<n-maxi_count<<endl;

    }
    return 0;
}
