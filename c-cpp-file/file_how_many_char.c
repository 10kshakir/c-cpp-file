#include <stdio.h>
int main()
{
    FILE *inputFile =fopen("inpt.txt","r");
    if(inputFile == NULL)
    {
        printf("File not found");
        return 0;
    }
    int i=0;
    while(1)
    {
        char ch =getc(inputFile);
        if(ch==EOF) break;
        i++;
    }
    printf("%d",i);
    fclose(inputFile);
    return 0;
}
