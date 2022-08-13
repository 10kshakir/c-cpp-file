#include <stdio.h>
int count_swaps(int a[],int n)
{
    int count =0;
    for(int steps =0;steps<n-1;steps++)
    {
        int indx =steps;
        for(int check =steps+1;check<n;check++)
        {
            if(a[check]<a[indx])
            {
                indx =check;
            }

        }
        if(indx!=steps)
        {
            int temp =a[steps];
            a[steps]=a[indx];
            a[indx]=temp;
            count++;
        }
    }
    return count;

}
int main()
{
    int a[]={2,1,3,4,5};
    int c =count_swaps(a,5);
    printf("%d",c);
}
