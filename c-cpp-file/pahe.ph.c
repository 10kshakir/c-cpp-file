#include <stdio.h>
int main()
{
    FILE *inputFile;
    inputFile =fopen("inp.txt","r");
    if(inputFile == NULL)
    {
        printf("File not found");
        return 0;
    }
    FILE *outputFile;
    outputFile=fopen("out600.txt","w");
    while(1)
    {
        char ch =getc(inputFile);
        if(ch ==EOF) break;
        fputc(ch,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
