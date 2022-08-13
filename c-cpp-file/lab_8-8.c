#include <stdio.h>
#include <string.h>

int main()
{
    char str[102];
    scanf("%s",str);
    int count =1;


    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]==str[i+1])
        {
            count++;

            if(count==7)
            {
            printf("YES");
            return 0;
            }

        }else if(str[i]!=str[i+1])
        {
            count=1;


        }

    }

       printf("NO");

    return 0;
}
