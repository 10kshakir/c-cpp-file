#include <stdio.h>
int main()
{
    int n;
    n =10;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int sum =0;
    for(int i =0;i<10;i++)
    {
        sum+=a[i];

    }
    printf("%d\n",sum);
    for(int i =9 ,j=0;j<i;i--,j++)
    {
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    for(int i =0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
