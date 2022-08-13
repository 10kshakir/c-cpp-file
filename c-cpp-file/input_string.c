#include <stdio.h>
int main()
{
    printf("Enter your name:");
    char name[100];
    fgets(name,10,stdin);
    printf("Hello! %s",name);
    return 0;
}
