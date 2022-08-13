#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int water_left = a-b;
    int water_poured = water_left<c?water_left:c;
    c-=water_poured;
    printf("%d",c);
    return 0;
}
