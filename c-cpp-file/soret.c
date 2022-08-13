#include <stdio.h>
#include <stdbool.h>
int  sort(int n,int a[])
{
    int count =1;
    for(int i =0;i<n-1;i++)
    {
        if(a[i]<a[i+1]) count++;
    }
    if(count ==n)
    {
        return 1;
    }else{
        return 0;
    }

}
int main()
{
    int a[6]={1,2,3,4,5,6};
    printf("%d",sort(6,a));
    return 0;
}
