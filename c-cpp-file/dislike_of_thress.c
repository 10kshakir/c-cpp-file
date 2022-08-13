#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i =1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        int sum =0;
        for(int j =1,k=1;k<=b;j++,k++)
        {
            if(j%3==0)  continue;
            sum+=j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
