#include <stdio.h>
#include <stdlib.h>
int *ret_array(int n)
{
   int *a=(int*)malloc(n*(sizeof(int)));
   for(int i =0;i<n;i++)
   {
       a[i]=1+i;

   }
   return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *b =ret_array(n);
    for(int i =0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
