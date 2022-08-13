#include <stdio.h>
int main()
{
    int num[20];
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Input element to insert");
    int ins;
    scanf("%d",&ins);

    printf("input position to insert");
    int indx ;
    scanf("%d",&indx);

    for(int i =n+1;i>=indx;i--)
    {

        num[i]=num[i-1];

    }
    num[indx]=ins;

    for(int i = 0;i<n+1;i++)
    {
        printf("%d ",num[i]);
    }

    return 0;
}
