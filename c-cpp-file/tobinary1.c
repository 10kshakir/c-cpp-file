#include <stdio.h>
#include <string.h>

void toBinary(unsigned int val, char str[], int k)
{
    int indx =0;
    while(val>0)
    {
        int d=val%2;
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
    unsigned int x=10;
    char xstr[100];
    toBinary(x,xstr,8);

    unsigned int y =12;
    char ystr[100];
    toBinary(y,ystr,8);

    printf("%s\n",xstr);
    printf("%s\n",ystr);

    unsigned int z=~~x;
    char zstr[100];
    toBinary(z,zstr,8);
    printf("%s\n",zstr);
    printf("%d\n",z);

    return 0;
}
