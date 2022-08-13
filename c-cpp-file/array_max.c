#include <stdio.h>
int main()
{
   int  a[5]={2,5,7,19, 8};
   int max =a[0],min=a[0];
   for(int  i =1;i<5;i++)
   {
       if(a[i]>max ) max =a[i];
       if(a[i]<min)  min =a[i];
   }
printf("%d\n",max);
printf("%d",min);
    return 0;
}
