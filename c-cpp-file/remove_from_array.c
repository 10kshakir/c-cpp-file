#include <stdio.h>
void rem_arr(int n,int *a,int pos)
{
    for(int i=pos+1;i<n;i++)
    {
        a[i-1]=a[i];
    }

}
int main()
{
    int a[5]={1,2,3,4,5};
    int pos;
    scanf("%d",&pos);
    rem_arr(5,a,pos);
    for(int i =0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
