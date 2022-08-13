#include <stdio.h>
int swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;

}
void selecion_sort(int n,int a[])
{
    for(int i =0;i<n;i++)
    {
        int element =a[i],pos =i;
        for(int j =i;j<n;j++)
        {
            if(a[j]<element)
            {
                element=a[j];
                pos =j;
            }

        }
        swap(&a[pos],&a[i]);

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selecion_sort(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i] );
    }
    return 0;
}
