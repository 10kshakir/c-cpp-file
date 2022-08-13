#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct binary{
    char str[50];
};

struct binary strBinary (unsigned int val,int k)
{
    struct binary ans;
    int indx=0;
    while(val>0)
    {
        int d =val%2;
        val=val/2;
        ans.str[indx]='0'+d;
        indx++;
    }
    for(int i =indx;i<k;i++) ans.str[i]='0';
    ans.str[k]='\0';
    strrev(ans.str);
    return ans;

}
unsigned char last_four_bit_zero(unsigned int mask)
{
     mask =mask>>4;

   return mask<<4;
}
int main()
{
    unsigned int x =211;
    printf("%s\n",strBinary(x,8).str);

    x =last_four_bit_zero(x);

    printf("%s\n",strBinary(x,8).str);

    return 0;



}
