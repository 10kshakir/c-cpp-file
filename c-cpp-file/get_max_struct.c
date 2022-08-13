#include <stdio.h>
struct Person
{
	    char name[100];
	    int val;
};
struct Person get_max(struct Person a[],int n)
{
    struct Person max =a[0];
    for(int i =0;i<n;i++)
    {
        if(a[i].val>max.val)
        {
            max =a[i];
        }
    }
    return max;
}
int main()
{
    struct Person a[3];
    for(int i =0;i<3;i++)
    {
        scanf("%s%d",&a[i].name ,&a[i].val);
    }
    struct Person max =get_max(a,3);
    printf("%s  %d",max.name,max.val);
}

