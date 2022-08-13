#include <stdio.h>
#include <stdbool.h>
bool odd_even(int n)
{
    if(n%2==0) return true;  //Has return + Has parameter
    else return false;
}
void odd_even(int n)
{
    if(n%2==0)
    {
        printf("%d",true);  //No return + Has parameter
    }else{
        printf("%d",false);
    }
}
bool odd_even()
{
    int n;
    scanf("%d",&n);
    if(n%2==0) return true;  //Has return + No parameter
    else return false;
}
void odd_even()
{
     int n;
     scanf("%d",&n);
     if(n%2==0)
    {
        printf("%d",true);  //No return + NO parameter
    }else{
        printf("%d",false);
    }
}
int main()
{
    int a = odd_even(6); //Has return + Has parameter

    odd_even(5);         //No return + Has parameter

    int b =odd_even();   //Has return + No parameter

    odd_even();          //No return + NO parameter

}
