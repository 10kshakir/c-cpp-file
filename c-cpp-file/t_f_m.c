#include <stdio.h>
int main()
{
    int a,f,m,t;
    scanf("%d%d%d%d",&a,&f,&m,&t);
    while(a>=0){
        a-=f;

        if(a<0){
            printf("F");
            break;
        }
        a-=m;

        if(a<0){
            printf("M");
            break;
        }
        a-=t;

        if(a<0){
            printf("T");
            break;
        }
    }


    return 0;
}
