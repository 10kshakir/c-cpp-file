#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i = 1;i<=b;i++){
        int rem = a%10;
        if (rem >0)
        {
            a--;
        }else if(rem==0)
        {
            a/=10;
        }
    }
    printf("%d",a);


}
