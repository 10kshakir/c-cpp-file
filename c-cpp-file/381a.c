#include <stdio.h>
int  main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)scanf("%d",&a[i]);
    int sereja =0;
    int dima =0;
    int l =0;
    int r =n-1;
    int z =0;
    while(l<=r)
    {
        if(z%2==0)
        {
            if(a[l]>a[r])
            {
                sereja+=a[l];
                l++;
            }else
            {
                sereja+=a[r];
                r--;
            }
        }else{

             if(a[l]>a[r])
            {
                dima+=a[l];
                l++;
            }else
            {
                dima+=a[r];
                r--;
            }
        }
        z++;
    }

    printf("%d %d",sereja,dima);
    return  0;
}
