#include <stdio.h>
#include <string.h>
void tobinary(unsigned int val ,char str[],int k)
{

    int indx =0;
    while(val>0)
    {
        int d = val%2;
        val=val/2;
        str[indx]='0'+d;

        indx++;
    }
  for(int i =indx;i<k;i++) str[i]='0';
    str[k]='\0';
    strrev(str);

}
int main()
{
    char str[100],ch[100],sand[100],snot[100];

    unsigned int v=23, x=35;

    tobinary(v,str);
    tobinary(x,ch);

    unsigned int  and =v&x; // for or |, for xor ^ ,~ for not

    tobinary(and,sand);

    printf("%d\n",and);
    printf("%s\n",str);
    printf("%s\n",ch);
    printf("%s\n",sand);
    unsigned int not =~v;
    tobinary(not ,snot);
    printf("%d\n",not);
    printf("%s",snot);
    return 0;
}
