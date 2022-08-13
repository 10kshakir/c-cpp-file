#include <stdio.h>
struct Person
{
	    char name[100];
	    int val;
};

int main()
{
    FILE *input =fopen("struct_file_input.txt","r");
    int n;
    fscanf(input,"%d",&n);
    struct Person p[n];
    for(int i =0;i<n;i++)
    {
        fscanf(input,"%s%d",&p[i].name,&p[i].val);
    }
    for(int i =0;i<n;i++)
    {
        printf("%s  %d\n",p[i].name,p[i].val);
    }
}
