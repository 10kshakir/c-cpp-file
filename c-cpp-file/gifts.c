#include<stdio.h>
int main()
{
    int n,k,a;
    scanf("%d%d%d",&n,&k,&a);
    int l =a;

    for(int i = 1;i<k;i++){
        if(l==n){
            l =1;

        }else{
           l++;

        }
    }

    printf("%d",l);

    return 0;
}
