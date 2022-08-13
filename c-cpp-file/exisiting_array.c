#include <stdio.h>
int main()
{
     int num[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("enter the element you want to search :");
    int search_int ;
    scanf("%d",&search_int);

    for(int i =0;i<n;i++)
    {
        if(num[i]==search_int)
        {
            printf("Element found at index %d",i);
            break;
        }

    }
}
