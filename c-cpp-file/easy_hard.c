#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum =0;

    for(int i =1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        sum+=b;
    }
    if(sum>0){
        printf("HARD");
    }else{
        printf("EASY");
    }
    return 0;
}
