#include <stdio.h>
#include <stdbool.h>
void swap(int *a,int *b)
{
    int temp =*a;
    *a =*b;
    *b=temp;
}
void rev_sort(int n,int a[])
{
    for (int i =0;i<n;i++)
    {
        for(int j =0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }

}
bool is_reverse_sorted(int n,int a[])
{
    int b[n];
    for(int i =0;i<n;i++)
    {
        b[i]=a[i];
    }
    rev_sort(n,b);
    int count =0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
 if(count ==n)
 {
     return true;
 }else{
    return false;
 }


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
    printf("%d",is_reverse_sorted(n,a));

    return 0;
}

