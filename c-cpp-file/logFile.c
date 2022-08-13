#include <stdio.h>
int main()
{
    FILE *logFile=fopen("out.txt","a");
    FILE *inputFile=fopen("hasdogh.txt","r");
    if(inputFile ==NULL)
    {
        fprintf(logFile,"File not found 5.50 pm\n");
        return 0;
    }
    return 0;
}
