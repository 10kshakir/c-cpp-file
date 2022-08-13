#include <stdio.h>
int main()
{
    long long int i;
    scanf("%lld",&i);
    if(i>=-2147483648&&i<=2147483647){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

