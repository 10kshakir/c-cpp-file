#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i =0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int mul;
    scanf("%d",&mul);
    for(int i =0;i<N;i++)
    {
        int ele =a[i];
        for(int j =0;j<N;j++)
        {
            if(a[i]!=a[j])
            {
                int ele2=a[j];
                int m = ele*ele2;
                if(m==mul)
                {
                printf("YES");
                return 0;
                }

            }
        }
    }
    printf("NO");
    return 0;
}
