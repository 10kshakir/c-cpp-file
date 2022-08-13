
#include <stdio.h>
int swap(int *a,int *b)
{
    static int count =0;
    count++;
    int temp =*a;
    *a=*b;
    *b=temp;
    printf("swap used  %d times\n",count);
}
void selection_sort(int n,int a[])
{
    for(int i =0;i<n;i++)
    {
        int element =a[i],pos=i;
        for(int j =i;j<n;j++)
        {
            if(a[j]<element)
            {
                element =a[j];
                pos=j;
            }
        }
        swap(&a[i],&a[pos]);
    }
}
void bubble_sort(int n,int a[])
{
    for(int  i =0;i<n;i++)
    {
        for(int j =0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
//    int a[n];
    int b[n];
//    for(int i =0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
    for(int i =0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
//    selection_sort(n,a);

    selection_sort(n,b);
    return 0;
}
