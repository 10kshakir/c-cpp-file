#include <stdio.h>
void selection_sort(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        int pos=i;
        for(int check =i+1;check<n;check++)
        {
            if(a[check]<a[pos])
            {
                pos=check;
            }
        }
        if(pos!=i)
        {
            int temp =a[i];
            a[i]=a[pos];
            a[pos]=temp;

        }
    }

}
int main()
{
    int n =5;

    int a[]={3,5,2,1,4};
    selection_sort(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

