#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str1;
    gets(str);   //texas
    scanf("%c",&str1); //a


   char *poss =strchr(str,str1);
   printf("%s",poss); //as


    return 0;
}

