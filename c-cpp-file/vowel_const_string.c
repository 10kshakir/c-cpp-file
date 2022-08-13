#include <stdio.h>
#include <string.h>
int main()

{

    char str[100];
    gets(str);
    int len =strlen(str);
    int vowel=0;
    int cons =0;
    for (int i =0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
           )
        {
            vowel++;
        }else if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {


            cons++;
        }
    }
    printf("%d\n",vowel);
    printf("%d\n",cons);
    return 0;
}
