#include <stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile=fopen("inp.txt","r");
    outputFile =fopen("out.txt","w");
    if(inputFile==NULL)
    {
        fprintf(outputFile,"File not found");
        return 0;
    }

    int n;
    fscanf(inputFile,"%d",&n);
    int sum=0;
    for(int i =0;i<n;i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);
        sum+=a;
    }
    fprintf(outputFile,"sum -> %d",sum);
    return 0;
}
