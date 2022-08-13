#include <stdio.h>
void swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
void sort(int n,int a[])
{
    for (int steps =0;steps<n;steps++)
    {
        int minElement = a[steps],pos=steps;
        for(int i =steps;i<n;i++)
        {
            if(a[i]<minElement)
            {
                minElement=a[i];
                pos =i;
            }
        }
        swap(&a[steps],&a[pos]);
    }
}


int findNegatives(int n, int in[], int out[])
{
    int count =0;
    for (int i =0;i<n;i++)
    {
        out[i]=in[i];
    }
    int indx=0;
    for(int i =0;i<n;i++)
    {
        if(in[i]<0)
        {
            out[indx]=in[i];
            count++;
            indx++;
        }
    }




    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int out[n];

    int neg=findNegatives(n,a,out);
    printf("%d \n",neg);
    for(int i =0;i<neg;i++)
    {
        printf("%d ",out[i]);
    }


    return 0;
}
