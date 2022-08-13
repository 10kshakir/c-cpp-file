#include <stdio.h>
int main(){
    int num ,num1;
    char ch ;
    scanf("%d %c %d",&num ,&ch,&num1);
    switch(ch){
        case '+':
            printf("%d",num+num1);
            break ;
        case '-':
            printf("%d",num-num1);
            break;
        case '*':
            printf("%d ",num*num1);
            break;
        case '/':
            printf("%d",num/num1);
            break;
        default:
            printf("unknown operator");
            break;
    }

    return 0;
}
