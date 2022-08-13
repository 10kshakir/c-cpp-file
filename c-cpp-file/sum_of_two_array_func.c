#include <stdio.h>
void add_array(int a[],int b[],int c[])
{


    for(int i =0;i<3;i++)
    {
        c[i]=a[i]+b[i];
    }

}
int main()
{
    int n =3;
    int a[]={1,2,3};
    int b[]={2,3,4};
    int c[n];
    add_array(a,b,c);
    for(int i =0;i<n;i++)
    {
        printf ("%d ",c[i]);
    }
    return 0;
}
