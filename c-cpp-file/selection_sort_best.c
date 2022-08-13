#include <stdio.h>
void sort(int *a,int n)
{
    for(int pos = 0;pos<n-1;pos++)
    {
        for(int check =pos+1;check<n ;check++)
        {
            if(a[check]<a[pos])
            {
                int temp =a[pos];
                a[pos]=a[check];
                a[check]=temp;
            }
        }
    }
}
int main()
{
    int a[5]={500,200,800,60,40};

    sort(a,5);
    for(int i =0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
