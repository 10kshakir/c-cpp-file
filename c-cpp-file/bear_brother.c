#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i = 1;
    while(true)
    {
        a*=3;
        b*=2;

        if(a>b){
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}
