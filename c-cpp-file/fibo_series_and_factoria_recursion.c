#include <stdio.h>
int factorial(int n)
{
    if(n ==0 )return 1;
     return n*factorial(n-1);

}
int fibo_rec(int n)
{

    if(n==1 || n==0) return 1;
    else return (fibo_rec(n-1)+fibo_rec(n-2));
}
int main() {
   int n = 5;
   int i;

   printf("Factorial of %d: %d\n" , n , factorial(n));
   printf("Fibbonacci of %d: " , n);

   for(i = 0;i<n;i++) {
      printf("%d ",fibo_rec(i));
   }
}

