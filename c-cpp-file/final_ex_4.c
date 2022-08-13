#include <stdio.h>
int main()
{
    int n ;
    scanf ("%d",&n);
     int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max =a[0];
    for( int i =0;i<n;i++)
    {
        if(a[i]>max) max =a[i];

    }
    int n1=max+1;
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

    int max =0;
    for ( int val =0;val<n1;val++)
    {
        if(count[val]>0)
        {
            printf("%d comes %d th times\n",val,count[val]);
        }
    }
}
