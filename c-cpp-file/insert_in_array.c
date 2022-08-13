#include <stdio.h>
void insert_array(int n,int *a,int pos,int element)
{
    for(int i =n-2;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=element;
}
int main()
{
    int a[6]={1,2,3,4,5};
    int n,e;
    scanf("%d%d",&n,&e);
    insert_array(6,a,n,e);
    for(int i =0;i<6;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
