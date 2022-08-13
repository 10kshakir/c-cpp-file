#include <stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    for(int i =0;i<d;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i =0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int i ,j;
        for( i =0,j=n-1;i<j;i++,j--)
        {


                printf("%d %d ",a[i],a[j]);


        }
        if(n%2==1)
        {
            printf("%d",a[i]);
        }
        printf("\n");


    }

    return 0;
}
