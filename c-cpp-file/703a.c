#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m[n];
    int c[n];
    int mishka =0;
    int chris =0;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&m[i]);
        scanf("%d",&c[i]);
    }
    for(int i =0;i<n;i++)
    {
        if(m[i]>c[i]) mishka++;
        if(m[i]<c[i]) chris++;
    }
    if(mishka>chris)
    {
        printf("Mishka");
    }else if(mishka<chris)
    {
        printf("Chris");
    }else{
        printf("Friendship is magic!^^");
    }
    return  0;
}
