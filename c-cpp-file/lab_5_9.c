#include <stdio.h>
#include <string.h>
void tobinary(unsigned int val ,char str[],int k,int *count)
{

    int indx =0;
    while(val>0)
    {
        int d = val%2;
        val=val/2;
        str[indx]='0'+d;

        indx++;
        *count =indx-1;
    }
  for(int i =indx;i<k;i++) str[i]='0';
    str[k]='\0';
    strrev(str);

}
unsigned int clearbit(unsigned int a,int k)
{
    return a&~(1<<k);
}
int main()
{
    unsigned int x =44;
    int count=0;
    char str[50];
    tobinary(x,str,8,&count);
    printf("%s\n",str);
    x=clearbit(x,count);


    tobinary(x,str,8,&count);
    printf("%s\n",str);

    return 0;
}
