#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i>=1&&i<=125){
        printf("%d",4);
    }else if(i>=126&&i<=211){
        printf("%d",6);
    }else if(i>=212&&i<=214){
        printf("%d",8);
    }
    return 0;
}
