#include<stdio.h>

int main()
{
    int n=5;
    int a[n], i, *ptr;


    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = &a[n - 1];


    for(i = 0; i < n; i++)
        printf("%d ", *ptr--);

    return 0;
}
