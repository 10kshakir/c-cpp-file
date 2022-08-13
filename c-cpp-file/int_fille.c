#include <stdio.h>
int main()
{
    FILE *inputFile =fopen("inpt.txt","r");
    FILE *outputFile =fopen("outt.txt","w");
    if(inputFile==NULL)
    {
        return 0;
    }
//    int n ;
//    fscanf(inputFile,"%d",&n);
//    int sum =0;
//    for(int i =0;i<n;i++)
//    {
//        int a ;
//        fscanf(inputFile,"%d",&a);
//        sum+=a;
//    }
//    fprintf(outputFile,"%d",sum);
    while(1)
    {
        char c =getc(inputFile);
        if(c==EOF) break;
        fputc(c,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
