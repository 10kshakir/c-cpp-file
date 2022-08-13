#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n =5;
    int *a =(int*)malloc(n*sizeof(int));
    int sum =0;
    for (int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i =0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
