#include <stdio.h>
int main()
{
    int i =1;
    int count=1;
    while(i<=4)
    {
        int j =1;
        while(j<=i)
        {
           printf("%d ",count);
           count++;
           j++;
        }
        i++;
        printf("\n");

    }
    return 0;
}
