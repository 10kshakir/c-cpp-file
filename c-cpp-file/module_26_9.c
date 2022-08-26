#include<stdio.h>
#include<string.h>
int top=-1;
char Stack[4]={'\0'};
void Push(char x){
  	Stack[++top]=x;
  	return;
}
char Pop(){
   return Stack[top--];}
int main()
{
    char Str1[4]={'\0'};
    char Str2[4]={'\0'};
    int i;
    strcpy(Str1, "CSE");
    for(i=0; i<3; ++i){
        Push(Str1[i]);
        printf("%d ",top);
    }
    printf("\n");
    printf("%d ",top);
    for(i=0; i<3; ++i){
            printf("%d ",top);

    Str2[i]=Pop();

    }
    printf("%s", Str2);
    printf("%d ",top);
    return 0;
}






