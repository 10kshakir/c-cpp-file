#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    FILE *logFile =fopen("outt.txt","a");
    for(int i =0;i<n;i++)
    {
        int a,sum =0 ;
        scanf("%d",&a);
        for(int i =0;i<a;i++)
        {
            int b;

            scanf("%d",&b);
            sum+=b;

        }
        fprintf(logFile,"Case %d: %d\n",i+1,sum);

    }
    return 0;
}
