#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0&&n<=100){
        if(n>=0&&n<40){
            printf("%d",40-n);
        }else if(n>=40&&n<70){
            printf("%d",70-n);
        }else if(n>=70&&n<90){
            printf("%d",90-n);

        }else {
            printf("expert");
        }
    }
    return 0;
}
