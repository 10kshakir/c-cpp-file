#include <stdio.h>
#include <string.h>
void tobinary(unsigned int val,char str[],int k)
{
    int indx =0;
    while (val>0)
    {
        int d =val%2;
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
    unsigned char n =211;

    char str[100],sleft[100];

    tobinary(n,str,8);
    printf("%s\n",str);

    unsigned int i= n<<4;
    tobinary(i,sleft,8);
    printf("%s",sleft);
}
