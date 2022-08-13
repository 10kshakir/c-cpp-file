#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct string{
    char str[50];
};

struct string toBinary(unsigned int a,int k)
{
    struct string b;
    int indx =0;
    while(a>0)
    {
        int temp =a%2;
        a=a/2;
        b.str[indx]=temp+'0';
        indx++;

    }
    for(int i =indx;i<k;i++) b.str[i]='0';
    b.str[k]='\0';
    strrev(b.str);
    return b;
}
bool getbit(unsigned int mask,int k)
{
    return (mask&(1<<k))!=0;
}
unsigned int setbit (unsigned int mask,int k)
{
    return mask|(1<<k);
}
unsigned int clearbit (unsigned int mask,int k)
{
    return mask&~(1<<k);
}
unsigned int flip (unsigned int mask,int k)
{
    return mask^(1<<k);
}
unsigned int rRotate(unsigned int mask,int k)
{
    int lastk =mask&((1<<k)-1);
    return (mask>>k)|(lastk<<(8-k));
}
int main()
{
    unsigned char x =54;
    printf("%s",toBinary(setbit(x,3),8).str);
    return 0;
}
