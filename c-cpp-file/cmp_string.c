#include<stdio.h>
#include <string.h>
int main() {
   char a[30], b[30];
   int i;

   printf("Enter two strings :");
   scanf("%s %s",a,b);

   i = 0;
   while (a[i] == b[i] && a[i] != '\0'&&b[i]!='\0')
   {
    i++;
   }
   if (a[i] == a[i])
      printf("a is equal to b\n");
   else if (a[i] =='\0'&&b[i]!='\0')
      printf("a is smaller than b\n");
   else if(a[i] !='\0'&&b[i]=='\0')
      printf("b is smaller than a\n" );
    else if(a[i]<b[i])
       printf("a is smaller than b\n");
   else
        printf("b is smaller than a\n" );

   return (0);
}

