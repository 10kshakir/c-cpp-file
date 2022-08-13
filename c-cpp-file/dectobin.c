#include <stdio.h>
void decToBin(int n)
{
    long long int binary =0;
    int i =1;
    while(n!=0)
    {
        int rem = n%2;
        n/=2;
        binary+=rem*i;
        i *=10;
    }

    printf("%lld\n",binary);
}
int main()
{
    int n=16,pos=4;

    decToBin(n);
    n=n|(1<<3);
    decToBin(n);

    return 0;
}
