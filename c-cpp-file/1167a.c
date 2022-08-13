#include <stdio.h>
#include <string.h>
int main()
{
    int n,s,l;
    scanf("%d",&n);
    char str[101];
    while(n--)
    {
        l=0;
        scanf("%d",&s);
        scanf("%s",str);
        if(strlen(str)<11)
        {
            printf("NO\n");
        }else{

            for(int i =0;i<strlen(str)-10;i++)
            {
               if(str[i]=='8')l++;
            }
            if(l ==0)
            {
                printf("NO\n");
            }else{
                printf("YES\n");
            }
        }

    }
    return 0;
}
