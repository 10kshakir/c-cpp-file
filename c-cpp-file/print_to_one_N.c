#include <stdio.h>
void printOneToN(int n)
{
    for(int i =1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    printOneToN(10);
}
