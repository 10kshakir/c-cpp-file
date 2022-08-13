#include <stdio.h>
#include <string.h>
int main()
{
   char str[100],patt;
   gets(str);
   scanf(" %c",&patt);
   char *cur=str;
   while(cur)
   {
       char *pos = strchr(cur,patt);
       if(pos==NULL) break;
       printf("%c found at %d\n",patt,pos-str);
       cur=pos+1;
   }
    return 0;
}
