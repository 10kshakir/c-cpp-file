#include <stdio.h>
void bubble_sort(int n,int a[])
{
    for(int i =1;i<n;i++)
    {
        int flag =0;
        for(int j =0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }
        }
        if(flag==0)break;
    }
}
int main()
{
     int n =5;

    int a[]={3,5,2,1,4};
    bubble_sort(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
