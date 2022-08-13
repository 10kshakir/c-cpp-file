#include <stdio.h>
int main()
{
    int j;
    scanf("%d",&j);
    for(int i =1;i<=j;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>33)
        {
            int div=a/5;
            int mult=(div*5)+5;
            int diff= mult-a;
            if(diff<3)
            {
                printf("%d\n",mult);
            }else{
                printf("%d\n",a);
            }
        }else{
            printf("%d",a);
        }


    }
   return 0;
}
