#include <stdio.h>
int main()
{
    int j ;
    scanf("%d",&j);
    int sum =0;

    for(int i = 1;i<=j;i++)
    {
       char a,b,c;
       scanf(" %c%c%c",&a,&b,&c);

       if(b=='+')
       {
           sum++;
       }else if(b=='-')
       {
           sum--;
       }
    }

    printf("%d",sum);

    return 0;
}
