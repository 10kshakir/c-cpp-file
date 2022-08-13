#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    scanf("%d" ,&n);
    int a[n] = {1, 2, 3, 4, 5};
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
