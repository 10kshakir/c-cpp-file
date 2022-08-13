#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Student
{
    char name[100];
    int id;
    int mark;

};
struct unique_stu
{
    char name[100];
    int id;
    int total_mark;
};
int main()
{
    FILE *inputFile =fopen("inpu.txt","r");
    FILE *outputFile =fopen("output.txt","w");
    if(inputFile==EOF)
    {
        printf("not found");
        return 0;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    struct Student st[n];
    struct unique_stu student[n];
    int k =0;
    for(int i =0;i<n;i++)
    {
        fscanf(inputFile,"%s%d%d",&st[i].name,&st[i].id,&st[i].mark);
        bool f =false;
        for(int j =0;j<k;j++)
        {
            if(student[j].id == st[i].id)
            {
                student[j].total_mark+=st[i].mark;
                f=true;
            }
        }
        if(!f)
        {
            strcpy(student[k].name,st[i].name);
            student[k].id=st[i].id;
            student[k].total_mark=st[i].mark;
            k++;
        }
    }
    for(int i =0;i<k-1;i++)
    {
        for(int j =1+i;j<k;j++)
        {
            if(student[i].total_mark<student[j].total_mark)
            {
                struct unique_stu tmp =student[i];
                student[i]=student[j];
                student[j]=tmp;
            }
        }
    }
    for(int i =0;i<k;i++)
    {
        fprintf(outputFile,"%s %d %d\n",student[i].name,student[i].id,student[i].total_mark);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
