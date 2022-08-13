#include <stdio.h>
int main(){
 int num,num1;
 scanf("%d %d",&num,&num1);
 int abs=num>num1?num:num1;
 printf("%d is bigger between %d and %d",abs,num,num1 );
 return 0;
}
