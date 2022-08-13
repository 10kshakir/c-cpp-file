#include <stdio.h>
#include <stdbool.h>
int swap(int *a,int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;

}
bool is_sorted(int n,int a[])
{
    int count =1;
    for (int i =0;i<n-1;i++)
    {
            if(a[i]<a[i+1])
            {
                count++;
            }
    }

    if(count==n){return true;}
    else{return false;}
}
void sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] > a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
    		}
		if (is_sorted(n, a))	break;

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
    sort(n,a);
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i] );
    }

    return 0;
}
