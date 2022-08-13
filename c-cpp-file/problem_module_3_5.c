#include <stdio.h>
int main()
{
  float number ;
  printf("Enter Number:");
  scanf("%f",&number);
  int int_part =(int)number;
  printf("Integer part =%d\n",int_part);
  float real_part = number -(float)int_part;
  printf("Real part = %.3f",real_part);
  return 0;

}
