#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[100];
    fgets(a,100,stdin);
    int len =strlen(a);
    a[len-1]='\0';
    printf("%d\n",len);
    bool word =false;
    int ans =0;
    for (int i =0;i<len-1;i++)
    {
        char val =a[i];
        if(val !=' ')
        {
            word =true;
        }
        if(val ==' ')
        {
            if(word ==true)
            {


            word =false;
            ans++;


            }
        }
        printf("%c\n",val);
    }

    if(word ==true)
    {
        ans++;
    }
    printf("%d\n",ans);

    return 0;
}
