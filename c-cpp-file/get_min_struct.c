#include <stdio.h>
struct Person
{
	    char name[100];
	    int val;
};
struct Person get_min(struct Person a[],int n)
{
    struct Person min =a[0];
    for(int i =0;i<n;i++)
    {
        if(a[i].val<min.val)
        {
            min =a[i];
        }
    }
    return min;
}
int main()
{
    struct Person a[3];
    for(int i =0;i<3;i++)
    {
        scanf("%s%d",&a[i].name ,&a[i].val);
    }
    struct Person min =get_min(a,3);
    printf("%s %d",min.name,min.val);
}
