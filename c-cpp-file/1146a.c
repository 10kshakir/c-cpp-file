#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{


    int  m;
    char s[52];

    scanf("%s",s);

    int ac = 0;
    int  n =strlen(s);
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            ac++;
    }

    while(true)
    {
        m = (n / 2)+1;

        if(ac >= m) break;
        n--;
    }

    printf("%d",n);

    return 0;
}
