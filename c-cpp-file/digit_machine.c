#include<stdio.h>
int main()
{
    int to[10];
    for(int i =0;i<10;i++)
    {
        scanf("%d",&to[i]);
    }
    int digit =0;
    for(int i =0;i<3;i++)     // o 1 2 3 4 5 6 7 8 9
    {                         // 9 0 1 2 3 4 5 6 7 8
        digit=to[digit];      //digit =to[0]=9
    }                         //9=to[9]=8
    printf("%d",digit);       //8=to[8]=7
    return 0;                 //digit =7
}
