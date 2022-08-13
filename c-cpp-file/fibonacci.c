#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int sum=1 ;
    int i =1;
    do{
        sum=sum*10+i;
        i++;
    }while(i<=n);
    printf("%d",sum);
    return 0;
}
