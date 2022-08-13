#include <stdio.h>


void reverse(int n,int num[])
{
    for(int i =0,j=n-1;i<j;i++,j--)
    {
        int temp =num[i];
        num[i]=num[j];
        num[j]=temp;
    }
}
int main()
{
    int d[]={1,2,3,4,5};

    for(int i =0;i<5;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    reverse(5,d);

    for(int i =0;i<5;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");




    return 0;
}
