#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int palindrome=0;
    int inp=n;
    while(n>0){
        int rem =n%10;
        n/=10;
        palindrome=palindrome*10+rem;
    }


    if(palindrome==inp){
        printf("%d is a palindrome",palindrome);
    }else{
        printf("%d is not a palindrome",palindrome);
    }
    return 0;
}
