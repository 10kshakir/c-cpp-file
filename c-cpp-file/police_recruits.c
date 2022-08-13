#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum =0;
    int untreat =0;
    for(int i =1;i<=n;i++)
    {
            int a;
            scanf("%d",&a);
            if(sum<0){
                 sum =0;
            }
            sum+=a;

            if(sum<0&&a<0){
                untreat++;
            }

    }
    printf("%d",untreat);
    return 0;
}
