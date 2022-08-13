#include <stdio.h>
#include <stdbool.h>
bool is_sort(int a[],int n)
{

    for(int i =0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int a[5]={1,2,3,4,5};
    int n =is_sort(a,5);
    if(n)
    {
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }

}
