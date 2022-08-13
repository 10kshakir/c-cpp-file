#include <stdio.h>
void sort(int*a,int*b,int*c)
{
    int highest,middle,lowest;
    if(*a<=*b&&*a<=*c)
    {
        lowest =*a;
        if(*b<=*c)
        {
            middle =*b;
            highest=*c;
        }else{
            middle=*c;
            highest=*b;
        }

    }else if(*b<=*c&&*b<=*a)
    {
        lowest =*b;
        if(*a<=*c)
        {
            middle =*a;
            highest=*c;
        }else{
            middle =*c;
            highest =*a;
        }
    }else
    {
        lowest=*c;
        if(*a<=*b)
        {
            middle=*a;
            highest=*b;
        }else{
            middle=*b;
            highest =*a;
        }
    }


  *a=lowest;
  *b=middle;
  *c=highest;


}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b,&c);
    printf("a =%d b =%d c=%d",a,b,c);
    return 0;
}
