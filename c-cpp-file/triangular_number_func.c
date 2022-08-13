#include <stdio.h>
int triangularNUmber(int n){
    int sum =0;
    for(int i =1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    triangularNUmber(n);
    return 0;

}
