#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n&1)
   {
       printf("%d is an odd",n);
   }
   else{
       printf("%d is an even",n);

   }
}
