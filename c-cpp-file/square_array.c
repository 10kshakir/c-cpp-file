#include <stdio.h>
void makeNArray(int n, int squares[])
{
    for (int i =0;i<n;i++)
    {
        squares[i]=(i+1)*(i+1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    makeNArray(n,s);
    for(int i =0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}
