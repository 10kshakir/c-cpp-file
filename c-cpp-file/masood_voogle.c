#include <stdio.h>
int main()
{
    int s,t,x;
    scanf("%d%d%d",&s,&t,&x);
     if (s>t){
        if(x>=s||x<t){
            printf("Yes");
        }else{
            printf("No");
        }
     }else if(s<t){
        if(x>=s&&x<t){
            printf("Yes");
        }else{
            printf("No");
        }
     }

return 0;

}





