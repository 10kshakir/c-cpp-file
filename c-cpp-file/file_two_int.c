#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum =a+b;
  FILE *out = fopen("out.txt","w");
    fprintf(out,sum);



}
