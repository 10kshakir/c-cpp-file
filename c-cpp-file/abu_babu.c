#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i =1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int rem =b-a;

        if(rem>=2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
