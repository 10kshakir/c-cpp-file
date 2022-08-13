#include <stdio.h>
void take_input(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int a[5];
    take_input(a,5);
    for(int i =0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}
