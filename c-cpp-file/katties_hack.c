#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1;i<=t;i++){
        int r,e,c;
        scanf("%d %d %d",&r,&e,&c);
        int rev_without_ad = e-c;
        if (r==rev_without_ad){
            printf("does not matter\n");
        }else if(r<rev_without_ad){
            printf("advertise\n");
        }else {
            printf("do not advertise\n");
        }
    }
    return 0;
}
