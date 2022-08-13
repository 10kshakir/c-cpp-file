#include <stdio.h>
#include <stdbool.h>
void copy(int a[],int b[],int n)
{
    for(int i =0;i<n;i++)
    {
        a[i]=b[i];
    }
}
void sort(int a[],int n)
{
    for(int i =0;i<n-1;i++)
    {
        int pos =i;
        for(int j =i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
              pos =j;
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
bool is_sort(int a[],int n)
{
    int b[n];
    copy(b,a,n);

    sort(b,n);

    for(int i =0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[5]={2,1,3,4,5};
    int n =is_sort(a,5);
    if(n)
    {
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}
