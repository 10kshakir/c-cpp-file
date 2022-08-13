#include <stdio.h>
struct Person
{
    char name[100];
    int val1;
    int val2;
};
void structure_sort(struct Person a[],int n)
{
    for(int i =0;i<n-1;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(a[i].val2>a[j].val2)
            {
                struct Person tmp =a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }

}
int main()
{
    struct Person p[3];
    for(int i =0;i<3;i++)
    {
        scanf("%s%d%d",&p[i].name,&p[i].val1,&p[i].val2);
    }
    structure_sort(p,3);
    printf("\n");
    for(int i =0;i<3;i++)
    {
        printf("%s  %d  %d\n",p[i].name,p[i].val1,p[i].val2);
    }

    return 0;
}
