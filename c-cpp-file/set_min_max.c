#include <stdio.h>
void set_min_max(int *a,int *b)
{
   if(*a>*b)
   {
       int temp =*a;
       *a=*b;
       *b=temp;
   }else
   {
       int temp =*b;
       *b=*a;
       *a=temp;

   }

}
int main()
{
    int a =30;
    int b=29;
    set_min_max(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
