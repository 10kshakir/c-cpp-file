#include <stdio.h>
int main (){
    int num,num1;
    char ch ;
    scanf("%d %c %d",&num,&ch,&num1);
    if(ch=='/'){
        if(num1 ==0){
            printf("cannot divided by 0");
        }else{
        printf("%d /%d =%d",num,num1,num/num1);
        }
    }else if(ch=='%'){
        printf("%d %% %d =%d",num,num1,num%num1);
    }else if (ch !='/'|| ch!='%'){
       printf("unknown operator");
    }
    return 0;
}
