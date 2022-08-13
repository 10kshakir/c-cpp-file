#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum =0;
    for (int i =1;i<=c;i++){

        a=i*3;
        sum+=a;
    }
    int borrowed = sum-b;
    if(borrowed <=0){

        printf("%d",0);
    } else{
        printf("%d",borrowed);
    }
    return 0;
}
